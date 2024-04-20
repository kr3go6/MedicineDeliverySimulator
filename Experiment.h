#pragma once
#include "DeliveryService.h"

using namespace System;
using namespace System::Collections::Generic;

namespace {

	List<Medicine^>^ GenerateRandomMedicines(int count) {
		List<Medicine^>^ medicines = gcnew List<Medicine^>();

		array<String^>^ possible_names = gcnew array<String^> {"Aspirin", "Paracetamol", "Miramistin", "TeraFlu", "MedA", "MedB", "MedC", "MedD"};
		array<double>^ possible_dosage = gcnew array<double> {1.0, 5.0, 10.0, 15.0, 20.0, 25.0, 50.0, 100.0};
		array<MedicineGroup>^ possible_groups = gcnew array<MedicineGroup> {
				MedicineGroup::Antibiotics,
				MedicineGroup::Cardiovascular,
				MedicineGroup::Hormones,
				MedicineGroup::Vacines,
				MedicineGroup::Vitamines};
		Random^ rand = gcnew Random();

		for (int i = 0; i < count; i++) {
			String^ name = possible_names[rand->Next(possible_names->Length)];
			double dosage = possible_dosage[rand->Next(possible_dosage->Length)];
			MedicineGroup group = possible_groups[rand->Next(possible_groups->Length)];

			Medicine^ med = gcnew Medicine(name, dosage, group);

			bool needs_regen = false;

			for each (auto added in medicines) {
				if (added->GetName() == name && added->GetDosage() == dosage && added->GetMedicineGroup() == group) {
					needs_regen = true;
				}
			}

			if (needs_regen) {
				i--;
			}
			else {
				medicines->Add(med);
			}
		}

		return medicines;
	}

}

ref class Experiment
{
public:
	double balance;
	double income_today;
	double spent_on_resupply;
	unsigned cur_day;
	unsigned day_to;
	unsigned orders_cnt_from, orders_cnt_to;
	unsigned orders_items_cnt_from, orders_items_cnt_to;
	unsigned retail_margin;
	unsigned discount;
	unsigned different_meds_cnt;
	unsigned couriers_cnt;
	double average_courier_load;
	System::String^ orders_log;
	DeliveryService^ service;
	Warehouse^ wh;
	PharmaceuticalCompany^ company;
	List<RegularCustomer^>^ regular_customers;
	List<Medicine^>^ possible_medicine;

	Experiment(int day_to, int couriers_cnt, int orders_from, int orders_to,
		int items_from, int items_to, int retail, int discount, unsigned meds_cnt)
		: cur_day(1), day_to(day_to), couriers_cnt(couriers_cnt),
		orders_cnt_from(orders_from), orders_cnt_to(orders_to),
		orders_items_cnt_from(items_from), orders_items_cnt_to(items_to),
		retail_margin(retail), discount(discount), orders_log(""), different_meds_cnt(meds_cnt)
	{
		auto gen_med = GenerateRandomMedicines(different_meds_cnt);
		possible_medicine = gen_med;

		wh = gcnew Warehouse(gen_med, orders_cnt_to * 10);
		service = gcnew DeliveryService(wh, couriers_cnt);
	}

	void MakeStep();
	void FfwdToEnd();
};

