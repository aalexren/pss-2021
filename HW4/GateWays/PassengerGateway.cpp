//
// Created by Artyom Chernitsa on 14.04.21.
//

#include "PassengerGateway.h"

PassengerGateway::PassengerGateway(Wendex* wendex) {
   this->wendex = wendex;
}

void PassengerGateway::login(Passenger *psngr, std::string& phoneNumber, std::string& password) {
   wendex->login(psngr, phoneNumber, password);
}

void PassengerGateway::seeOrderHistory(Passenger &psngr) {
   if (wendex->isLogined(psngr)) {
      auto orders = wendex->seeOrderHistory(psngr);
   }

   // TODO: print info or save info into the vector
}

void PassengerGateway::updatePaymentMethods(Passenger &psngr) {
   if (wendex->isLogined(psngr)) {
      // TODO: make a choice of method
      auto method = rand()%2 ? PaymentMethods::Card : PaymentMethods::Cash; // MOCK
      wendex->updatePaymentMethods(psngr, method);
   }
}

void PassengerGateway::updatePinnedAddresses(Passenger &psngr) {
   if (wendex->isLogined(psngr)) {
      // TODO: add the new address
      Address address("Innopolis", "Sportivnaya"); // MOCK
      wendex->updatePinnedAddress(psngr, address);
   }
}

void PassengerGateway::orderRide(Passenger &psngr, Address from, Address to, CarType carType) {
   if (wendex->isLogined(psngr)) {
      wendex->orderRide(psngr, from, to, carType);
      // automatically added the order to the history of the user
   }
}

Address PassengerGateway::getCoordinates(Passenger &psngr) {
   if (wendex->isLogined(psngr)) {
      wendex->getCoordinates();
   }
}

std::string PassengerGateway::getBill(Passenger &psngr, Order &order) {
   if (wendex->isLogined(psngr)) {
      wendex->getBill(psngr, order);
   }
}

void PassengerGateway::agreeConditions() {
   // TODO
}
