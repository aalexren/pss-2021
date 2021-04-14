//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "Driver.h"

std::string Driver::toString() {
   return "Driver:[" + getName() + "," +
          getPhoneNumber() + "," +
          std::to_string(getRating()) + "," +
          (workStatus == WorkStatus::Ride ? "in ride" : "free") +
          "]";
}

Driver::Driver(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating, Car* car) : User(name,
                                                                                                         phoneNumber,
                                                                                                         password,
                                                                                                         rating) {
   this->car = car;
}
