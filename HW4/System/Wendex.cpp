//
// Created by Artyom Chernitsa on 14.04.21.
//

#include "Wendex.h"

Wendex::Wendex() {

}

bool Wendex::login(User *user, std::string &phoneNumber, std::string &password) {
   // TODO
   for (auto &it: loginedUsers) {
      if (it->getPhoneNumber() == user->getPhoneNumber()) {
         std::cout << "User has been already logined." << std::endl;
         return false;
      }
   }
   loginedUsers.push_back(user);
   std::cout << "User has been successfully logined." << std::endl;
   return true;
}

bool Wendex::isLogined(User &user) {
   for (auto &it: loginedUsers) {
      if (it->getPhoneNumber() == user.getPhoneNumber()) {
         std::cout << "User is logined." << std::endl;
         return true;
      }
   }
   std::cout << "User is not logined." << std::endl;
   return false;
}


// for Passenger
std::vector<Order *> Wendex::seeOrderHistory(Passenger &passenger) {
   std::vector<Order*> ret;
   std::cout << "Order history:" << std::endl;
   for (auto &it: orders) {
      if (it->passenger->getPhoneNumber() == passenger.getPhoneNumber()) {
         std::cout << it->toString() << std::endl;
         ret.push_back(it);
      }
   }
   return ret;
}

void Wendex::updatePaymentMethods(Passenger &passenger, PaymentMethods method) {
   passenger.paymentMethods = method;
}

void Wendex::updatePinnedAddress(Passenger &passenger, Address address) {
   passenger.pinnedAddress.push_back(address);
}

void Wendex::orderRide(Passenger &passenger, Address from, Address to, CarType carType) {
   Order *order = new Order();
   order->passenger = &passenger;
   order->distance = rand()%100;
   order->totalCost = order->distance/10.0 * (rand()%1000);
   order->startAddress = &from;
   order->endAddress = &to;
   order->startDate = new Date(rand()%100 + 2000, rand()%12 + 1, rand()%31 + 1);
   order->endDate = new Date(rand()%100 + 2000, rand()%12 + 1, rand()%31 + 1);
   order->expectedTime = order->startDate->difference(order->endDate);
   for (auto &driver: this->loginedDrivers) {
      if (driver->getWorkStatus() == WorkStatus::Free) {
         order->driver = driver;
         break;
      }
   }
   std::cout << "Do you accept the conditions?" << std::endl;
   std::cout << order->toString() << std::endl;
   if (rand()%2) {
      updateStatus(reinterpret_cast<Driver &>(order->driver), WorkStatus::Ride);
   } else {
      orderRide(passenger, from, to, carType);
   }
}

Address Wendex::getCoordinates() {
   return Address("Innopolis", "Sportivnaya");
}

std::string Wendex::getBill(Passenger &passenger, Order order) {
   return order.toString();
}


// for Driver
std::vector<Order *> Wendex::seeOrderHistory(Driver &driver) {
   return std::vector<Order *>();
}

Car Wendex::getCar(Driver &driver) {
   return *driver.getCars()[0];
}

void Wendex::updateStatus(Driver &drvr, WorkStatus workStatus) {
   drvr.workStatus = workStatus;
}

void Wendex::getAvailableOrders(Driver &driver) {

}
