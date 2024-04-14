#include "PharmaceuticalCompany.h"

SupplyPromise^ PharmaceuticalCompany::RequestMedicineSupplies(PharmacyGood^ needed_med, unsigned amount) {
	auto rand = gcnew Random();
	rand->Next(1, 4);
	return gcnew SupplyPromise(needed_med, amount, rand->Next(1, 3));
}
List<PharmacyGood^>^ PharmaceuticalCompany::TryReceiveSupply(SupplyPromise^ promise) {
	auto supply = gcnew List<PharmacyGood^>();

	if (promise->days_left > 0) {
		return supply;
	}

	for (int i = 0; i < promise->amount; i++) {
		supply->Add(promise->needed_med);
	}

	return supply;
}