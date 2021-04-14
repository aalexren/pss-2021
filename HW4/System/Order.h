//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_ORDER_H
#define HW4_ORDER_H

#include "Date.h"
#include "Address.h"

class Passenger; //#include "Passenger.h"
class Driver; //#include "Driver.h"

class Order {
public:
   Order();
   std::string toString();

   Date startDate;
   Date endDate;
   int expectedTime;
   Address startAddress;
   Address endAddress;
   Passenger* passenger; // to save ID in database
   Driver* driver; // to save ID in database
   double totalCost;
   double distance;
   int id; // unique key
};

#endif //HW4_ORDER_H
