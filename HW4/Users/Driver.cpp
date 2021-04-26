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
   this->cars.push_back(car);
}

Driver::Driver(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating, std::vector<Car*> cars) : User(name,
                                                                                                                                     phoneNumber,
                                                                                                                                     password,
                                                                                                                                     rating) {
   this->cars = cars;
}

WorkStatus Driver::getWorkStatus() {
   return WorkStatus::Free;
}

std::vector<Car *> Driver::getCars() {
   return cars;
}
