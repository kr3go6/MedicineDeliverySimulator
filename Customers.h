#pragma once
#include "Medicine.h"
#include "Order.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Order;

ref struct RegularPurchase {
	Medicine^ med;
	unsigned period;
};

ref struct Customer
{
	System::String^ name;
	System::String^ phone;
	System::String^ address;
	System::String^ discount_card_num;

public:
	Customer() {}
	Customer(System::String^ name, System::String^ phone, System::String^ addr, System::String^ card) : name(name), phone(phone), address(addr), discount_card_num(card) {}
};

ref class RegularCustomer : Customer
{
	List<RegularPurchase^>^ requirements;
};
