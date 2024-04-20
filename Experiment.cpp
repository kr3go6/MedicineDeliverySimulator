#include "Experiment.h"

void Experiment::MakeStep() {
	income_today = 0;

	if (cur_day >= day_to) {
		orders_log = "SIMULATION END\n";
		orders_log += "Current balance: " + balance + "\n";
		orders_log += "Spent on resupply: " + spent_on_resupply + "\n";
		orders_log += "Average courier load: " + (average_courier_load * 100.0f / (day_to * couriers_cnt * 7)).ToString("f") + "%\n";
		return;
	}

	Random^ rand = gcnew Random();

	auto orders_num = rand->Next(orders_cnt_from, orders_cnt_to);

	orders_log = "ORDERS TODAY: " + orders_num + "\n";

	wh->ReceiveFromReadyRequests();

	auto possible_names = gcnew array<System::String^> {"Arthur", "Alex", "Alesha", "Alena",
		"Amur", "Dmitry", "Vlad", "Elena", "Nataly", "Maria", "Valentin", "Egor", "Kirill", "Pavel",
		"Anastasia", "Katya", "Anya"
	};

	for (int buyers_cnt = 0; buyers_cnt < orders_num; buyers_cnt++) {
		Customer^ customer = gcnew Customer(possible_names[rand->Next(possible_names->Length)],
			"+" + static_cast<unsigned long long>(rand->Next(7000, 7999)) +
			static_cast<unsigned long long>(rand->Next(1000000, 9999999)), "Moscow, Russia", rand->Next(0, 2).ToString());

		List<OrderItem^>^ items = gcnew List<OrderItem^>;

		for (int i = 0; i < rand->Next(orders_items_cnt_from, orders_items_cnt_to); i++) {
			auto med1 = possible_medicine[rand->Next(possible_medicine->Count)];

			PharmacyGood^ good1 = gcnew PharmacyGood(med1->GetName(), med1->GetDosage(), med1->GetMedicineGroup(), MedicineType::Pills, 100, 365);
			OrderItem^ item1 = gcnew OrderItem(good1, rand->Next(1, 10));
			items->Add(item1);
		}

		Order^ order = gcnew Order(customer, items);

		auto cost = service->ProcessOrder(order)->money;
		auto k = static_cast<double>(100.0f) + static_cast<double>(retail_margin);

		if (cost >= 1000.0f) {
			if (customer->discount_card_num == "0") {
				k -= 3;
			}
			else {
				k -= discount;
			}
		}

		cost *= (k / 100.0f);

		orders_log += (customer->discount_card_num == "0") ? "" : "[d] ";
		orders_log += customer->name + "; " + customer->phone + "; ";
		orders_log += order->items->Count + " positions; got money: " + cost + "\n";

		income_today += cost;
		balance += cost;
	}

	auto need_to_pay = wh->CheckSupplies();
	balance -= need_to_pay->money;
	orders_log += "====\n" + need_to_pay->money + " paid for opening supply requests\n";
	spent_on_resupply += need_to_pay->money;

	cur_day++;
}

void Experiment::FfwdToEnd() {
	while (cur_day < day_to) {
		MakeStep();
		average_courier_load += service->EndDay();
	}

	orders_log = "SIMULATION END\n";
	orders_log += "Current balance: " + balance + "\n";
	orders_log += "Spent on resupply: " + spent_on_resupply + "\n";
	orders_log += "Average courier load: " + (average_courier_load * 100.0f / (day_to * couriers_cnt * 7)).ToString("f") + "%\n";
}
