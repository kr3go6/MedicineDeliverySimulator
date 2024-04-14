#pragma once

using namespace System;

enum class MedicineGroup {
	Cardiovascular,
	Antibiotics,
	Hormones,
	Vacines,
	Vitamines
};

System::String^ MedicineGroupToString(MedicineGroup group);

enum class MedicineType {
	Pills,
	Suspension,
	Spray,
	Ointment
};

ref class Medicine
{
protected:
	System::String^ name;
	double dosage;
	MedicineGroup group;

public:
	System::String^ GetName() { return name; }
	double GetDosage() { return dosage; }
	MedicineGroup GetMedicineGroup() { return group; }
	Medicine(String^ n, double d, MedicineGroup g) : name(n), dosage(d), group(g) {}
};

ref class PharmacyGood : Medicine {
	MedicineType type;
	double wholesale_price;
	int days_before_expired;

public:
	int ReduceDaysLeft(int days_passed);
	double GetPrice();
	int GetDaysLeft();
	MedicineType GetType() { return type; }

	PharmacyGood(String^ n, double dos, MedicineGroup g, MedicineType t, double price, int days) : Medicine(n, dos, g), type(t), wholesale_price(price), days_before_expired(days) {}
};


