#include "Medicine.h"

constexpr int DAYS_DISCOUNT = 30;

System::String^ MedicineGroupToString(MedicineGroup group) {
	switch (group) {
	case MedicineGroup::Cardiovascular:
		return "[C]";
	case MedicineGroup::Antibiotics:
		return "[A]";
	case MedicineGroup::Hormones:
		return "[H]";
	case MedicineGroup::Vacines:
		return "[Vac]";
	case MedicineGroup::Vitamines:
		return "[Vit]";
	}
}


int PharmacyGood::ReduceDaysLeft(int days_passed) {
	days_before_expired -= days_passed;

	if (days_before_expired < DAYS_DISCOUNT) {
		wholesale_price *= 0.5;
	}

	return days_before_expired;
}

double PharmacyGood::GetPrice() {
	return wholesale_price;
}

int PharmacyGood::GetDaysLeft() {
	return days_before_expired;
}
