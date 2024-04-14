#pragma once
#include "Warehouse.h"
#include "Medicine.h"

ref class Courier {
	System::String^ name;
	unsigned orders_delivered;

public:
	void EndShift() { orders_delivered = 0; };
	void Deliver() { orders_delivered++; };
	bool CanDeliver(unsigned max_orders) { return orders_delivered < max_orders; }
	System::String^ GetName() { return name; }
	unsigned GetOrdersDeilvered() { return orders_delivered; }

	Courier(System::String^ n) : name(n), orders_delivered(0) {}
};

ref class DeliveryService
{
	Warehouse^ wh;
	List<Courier^>^ couriers;
	
public:
	DeliveryService(Warehouse^ wh, unsigned couriers_cnt) : wh(wh), couriers(gcnew List<Courier^>()) {
		auto rand = gcnew Random();

		for (int i = 0; i < couriers_cnt; i++) {
			auto possible_names = gcnew array<System::String^> {"Ivan", "Diana", "John", "Fedor", "Artyom", "Marat"};
			Courier^ courier = gcnew Courier(possible_names[rand->Next(possible_names->Length)]);

			couriers->Add(courier);
		}
	}

	double EndDay() {
		double orders_delivered = 0;

		for each (Courier ^ c in couriers) {
			orders_delivered += c->GetOrdersDeilvered();
			c->EndShift();
		}

		return orders_delivered;
	}

	System::String^ GetDeliveryLog() {
		System::String^ log("");
		for each (Courier ^ c in couriers) {
			log += c->GetName() + ": " + c->GetOrdersDeilvered() + " delivered\n";
		}
		return log;
	}

	Bill^ ProcessOrder(Order^ order);
};

