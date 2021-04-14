//
// Created by Artyom Chernitsa on 14.04.21.
//

#ifndef HW4_PASSENGERGATEWAY_H
#define HW4_PASSENGERGATEWAY_H

#include "../System/Address.h"
#include "../Users/Passenger.h"
#include "../System/Wendex.h"
#include "../System/PreOrder.h"

class PassengerGateway {
public:
   PassengerGateway(Wendex* wendex);

   void login(Passenger *psngr, std::string &phoneNumber, std::string &password);
   void seeOrderHistory(Passenger& psngr);
   void updatePaymentMethods(Passenger& psngr);
   void updatePinnedAddresses(Passenger& psngr);

   void orderRide(Passenger &psngr);

   Address getCoordinates(Passenger &psngr); // coordinates of the car during the current ride
   std::string getBill(Passenger &psngr, Order &order);

private:
   Wendex* wendex; // main server of Wendex.Taxi service

   void agreeConditions();
};

#endif //HW4_PASSENGERGATEWAY_H
