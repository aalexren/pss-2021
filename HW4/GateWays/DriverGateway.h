//
// Created by Artyom Chernitsa on 14.04.21.
//

#ifndef HW4_DRIVERGATEWAY_H
#define HW4_DRIVERGATEWAY_H

#include <vector>

#include "../System/Order.h"
#include "../Cars/Car.h"
#include "../System/Wendex.h"

class DriverGateway {
public:
   DriverGateway(Wendex* wendex);

   void login(Driver *drvr, std::string &phoneNumber, std::string &password);
   void seeOrderHistory(Driver &drvr);
   Car getCar(Driver& drvr); // see current car
   void updateStatus(Driver& drvr);
   std::vector<Order> getAvailableOrders(Driver& drvr);

private:
   Wendex* wendex; // main server of Wendex.Taxi service
};

#endif //HW4_DRIVERGATEWAY_H
