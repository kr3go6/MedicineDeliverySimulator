#include "Warehouse.h"

void Warehouse::ReceiveFromReadyRequests() {
    for each (auto promise in promises) {
        promise->days_left--;
    }

    for (int i = promises->Count - 1; i >= 0; --i) {
        auto supplies_got = company->TryReceiveSupply(promises[i]);

        if (supplies_got->Count != 0) {
            goods->AddRange(supplies_got);
            promises->RemoveAt(i);
        }
    }
}

Bill^ Warehouse::MakeSupplyRequest(PharmacyGood^ needed_med, unsigned amount) { 
    auto promise = company->RequestMedicineSupplies(needed_med, amount);
    promises->Add(promise);

    return gcnew Bill(needed_med->GetPrice() * amount);
}

Bill^ Warehouse::CheckSupplies() {
    unsigned need_to_pay = 0;

    for each (Medicine ^ med in possible_medicine) {
        unsigned count = 0;
        auto name = med->GetName();
        auto dosage = med->GetDosage();
        auto group = med->GetMedicineGroup();

        for each (PharmacyGood ^ good in goods) {
            if (good->GetName() == name && good->GetDosage() == dosage && good->GetMedicineGroup() == group) {
                count++;
            }
        }

        auto rand = gcnew Random();
        rand->Next(25, 40);

        if (2 * count < amount_to_request) {
            bool needs_req = true;

            for each (auto p in promises) {
                auto p_med = p->needed_med;

                if (p_med->GetName() == med->GetName() &&
                        p_med->GetDosage() == med->GetDosage() &&
                        p_med->GetMedicineGroup() == med->GetMedicineGroup()) {
                    needs_req = false;
                    break;
                }
            }

            if (needs_req) {
                need_to_pay += MakeSupplyRequest(
                    gcnew PharmacyGood(
                        med->GetName(),
                        med->GetDosage(),
                        med->GetMedicineGroup(),
                        MedicineType::Pills, 100, rand->Next(30, 40)),
                    amount_to_request)->money;
            }
        }
    }

    return gcnew Bill(need_to_pay);
}

List<PharmacyGood^>^ Warehouse::CollectOrder(Order^ order) {
    List<PharmacyGood^>^ collectedGoods = gcnew List<PharmacyGood^>();

    for (int i = order->items->Count - 1; i >= 0; --i) {
        OrderItem^ item = order->items[i];
        Medicine^ med = item->med;
        int amount = item->amount;

        for (int j = goods->Count - 1; j >= 0; --j) {
            PharmacyGood^ good = goods[j];

            if (good->GetName() == med->GetName() && good->GetMedicineGroup() == med->GetMedicineGroup()) {
                collectedGoods->Add(good);
                goods->RemoveAt(j);

                amount--;
                if (amount <= 0) break;
            }
        }
    }

    return collectedGoods;
}

System::String^ Warehouse::GetStateLog() {
    System::String^ log = gcnew System::String("");

    for each (Medicine^ med in possible_medicine) {
        int count = 0;
        auto name = med->GetName();
        auto dosage = med->GetDosage();
        auto group = med->GetMedicineGroup();

        for each (PharmacyGood ^ good in goods) {
            if (good->GetName() == name && good->GetDosage() == dosage && good->GetMedicineGroup() == group) {
                count++;
            }
        }

        log += MedicineGroupToString(group) + " " + name + " " + dosage + "mg: " + count + "\n";
    }

    log += "====\nOpen supply requests:\n";

    for each (auto promise in promises) {
        auto med = promise->needed_med;
        log += promise->amount + " items of " + med->GetName() + " " +
            med->GetDosage() + "mg " + MedicineGroupToString(med->GetMedicineGroup()) + "; " +
            promise->days_left + " days left\n";
    }

    return log;
}
