#pragma once
#include "Medicine.h"
#include "PharmaceuticalCompany.h"
#include "Order.h"

using namespace System;
using namespace System::Collections::Generic;

ref struct Bill {
	double money;
	Bill() : money(0) {}
	Bill(double m) : money(m) {}
};

ref class Warehouse
{
	unsigned amount_to_request;
	List<PharmacyGood^>^ goods;
	List<SupplyPromise^>^ promises;
	PharmaceuticalCompany^ company;
	List<Medicine^>^ possible_medicine;

public:
	Warehouse(List<Medicine^>^ medicines, unsigned n) : possible_medicine(medicines), amount_to_request(n) {
		goods = gcnew List<PharmacyGood^>;
		promises = gcnew List<SupplyPromise^>;

		for each (Medicine ^ med in possible_medicine) {
			for (int i = 0; i < 100; i++) {
				goods->Add(gcnew PharmacyGood(med->GetName(), med->GetDosage(), med->GetMedicineGroup(), MedicineType::Pills, 100, 365));
			}
		}
	}

	void ReceiveFromReadyRequests();
	Bill^ CheckSupplies();
	Bill^ MakeSupplyRequest(PharmacyGood^ needed_med, unsigned amount);
	List<PharmacyGood^>^ CollectOrder(Order^ order);
	System::String^ GetStateLog();
};

