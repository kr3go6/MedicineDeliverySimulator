#include "DeliveryService.h"

Bill^ DeliveryService::ProcessOrder(Order^ order) {
	auto collectedOrder = this->wh->CollectOrder(order);
	if (collectedOrder->Count == 0) {
		return gcnew Bill();
	}

	for each (Courier ^ courier in couriers) {
		if (courier->CanDeliver(7)) {
			courier->Deliver();

			double price = 0;

			for each (PharmacyGood ^ item in collectedOrder) {
				price += item->GetPrice();
			}

			return gcnew Bill(price);
		}
	}

	return gcnew Bill();
}
