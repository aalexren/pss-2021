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

Driver::Driver(std::string &name, std::string &phoneNumber, std::string &password, double rating) : User(name,
                                                                                                         phoneNumber,
                                                                                                         password,
                                                                                                         rating) {

}
