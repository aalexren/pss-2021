//
// Created by Artyom Chernitsa on 13.04.21.
//

#include <string>

#include "Order.h"

std::string Order::toString() {
   return "[" +
      startDate->toString() + "," +
      endDate->toString() + "," +
      expectedTime->toString() + "," +
      startAddress->toString() + "," +
      endAddress->toString() + "," +
//      passenger->getID() + "," +
//      driver->getID() + "," +
      std::to_string(totalCost) + "," +
      std::to_string(distance) + "," +
      std::to_string(id) + "]";
}

Order::Order() {

}
