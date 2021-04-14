//
// Created by Artyom Chernitsa on 14.04.21.
//

#include "Wendex.h"

Wendex::Wendex() {

}

bool Wendex::login(User *user, std::string &phoneNumber, std::string &password) {
   // TODO
   for (auto &it: loginedUsers) {
      if (it->getPhoneNumber() == user->getPhoneNumber()) return false;
   }
   loginedUsers.push_back(user);
   return true;
}

bool Wendex::isLogined(User &user) {
   for (auto &it: loginedUsers) {
      if (it->getPhoneNumber() == user.getPhoneNumber()) return true;
   }
   return false;
}


// for Passenger
std::vector<Order *> Wendex::seeOrderHistory(Passenger &passenger) {
   std::vector<Order*> ret;
   for (auto &it: orders) {
      if (it->passenger->getPhoneNumber() == passenger.getPhoneNumber())
         ret.push_back(it);
   }
   return ret;
}

void Wendex::updatePaymentMethods(Passenger &passenger, PaymentMethods method) {
   passenger.paymentMethods = method;
}

void Wendex::updatePinnedAddress(Passenger &passenger, Address address) {
   passenger.pinnedAddress.push_back(address);
}

void Wendex::orderRide(Passenger &passenger, PreOrder preOrder) {

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
   return Car("Lexus", "A555AA77RUS", DarkBlue);
}

void Wendex::updateStatus(Driver &drvr, WorkStatus workStatus) {

}

void Wendex::getAvailableOrders(Driver &driver) {

}
