#pragma once
#include "Customers.h"
#include "Medicine.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Customer;

ref struct OrderItem {
	Medicine^ med;
	unsigned amount;

	OrderItem(Medicine^ m, unsigned int a) : med(m), amount(a) {}
};

ref struct Order
{
	Customer^ customer;
	List<OrderItem^>^ items;
public:
	Order(Customer^ c, List<OrderItem^>^ i) : customer(c), items(i) {}
};
