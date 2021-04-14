//
// Created by Artyom Chernitsa on 14.04.21.
//

#include "DriverGateway.h"

DriverGateway::DriverGateway(Wendex* wendex) {
   this->wendex = wendex;
}

void DriverGateway::login(Driver *drvr, std::string& phoneNumber, std::string& password) {
   wendex->login(drvr, phoneNumber, password);
}


void DriverGateway::seeOrderHistory(Driver& drvr) {
   if (wendex->isLogined(drvr)) {
      wendex->seeOrderHistory(drvr);
   }
}

Car DriverGateway::getCar(Driver& drvr) {
   if (wendex->isLogined(drvr)) {
      return wendex->getCar(drvr);
   }

   // return what if not?
}

void DriverGateway::updateStatus(Driver& drvr) {
   if (wendex->isLogined(drvr)) {
      //TODO choose the status either busy or not
      auto status = drvr.getWorkStatus(); // MOCK
      wendex->updateStatus(drvr, status);
   }
}

std::vector<Order> DriverGateway::getAvailableOrders(Driver& drvr) {
   if (wendex->isLogined(drvr)) {
      wendex->getAvailableOrders(drvr); // distance formula can be used to extend this method
   }
}