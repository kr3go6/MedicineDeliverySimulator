#pragma once
#include "Medicine.h"

using namespace System;
using namespace System::Collections::Generic;

ref struct SupplyPromise {
	PharmacyGood^ needed_med;
	unsigned amount;
	unsigned days_left;

	SupplyPromise(PharmacyGood^ m, unsigned am, unsigned days) : needed_med(m), amount(am), days_left(days) {}
};

ref class PharmaceuticalCompany
{
public:
	SupplyPromise^ RequestMedicineSupplies(PharmacyGood^ needed_med, unsigned amount);
	List<PharmacyGood^>^ TryReceiveSupply(SupplyPromise^ promise);
};

