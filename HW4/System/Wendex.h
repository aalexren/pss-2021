//
// Created by Artyom Chernitsa on 14.04.21.
//

#ifndef HW4_WENDEX_H
#define HW4_WENDEX_H

#include <vector>

#include "../Users/User.h"
#include "../Users/Driver.h"
#include "../Users/Passenger.h"
#include "Order.h"
#include "PreOrder.h"

class Wendex {
public:
   Wendex();

   bool login(User* user, std::string& phoneNumber, std::string& password);
   bool isLogined(User& user);

   // for Passenger
   std::vector<Order*> seeOrderHistory(Passenger& passenger);
   void updatePaymentMethods(Passenger& passenger, PaymentMethods method);
   void updatePinnedAddress(Passenger& passenger, Address address);
   void orderRide(Passenger& passenger, PreOrder preOrder);
   Address getCoordinates();
   std::string getBill(Passenger &passenger, Order order);

   // for Driver
   std::vector<Order*> seeOrderHistory(Driver& driver);
   Car getCar(Driver& driver);
   void updateStatus(Driver& drvr, WorkStatus workStatus);
   void getAvailableOrders(Driver& driver);

private:
   std::vector<User*> loginedUsers;
   std::vector<Order*> orders;
};

#endif //HW4_WENDEX_H
