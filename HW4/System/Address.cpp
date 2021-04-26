//
// Created by Artyom Chernitsa on 14.04.21.
//

#include <random>

#include "Address.h"

Address::Address(const std::string& city, const std::string& street) {
   this->city = city;
   this->street = street;

   std::uniform_real_distribution<double> unif(0, 100);
   std::default_random_engine re;
   auto dice {std::bind(unif, re)};
   this->longitude = dice();
   this->latitude = dice();
}

Address::Address(const std::string& city, const std::string& street, double lngtd, double lttd) {
   this->city = city;
   this->street = street;
   this->longitude = lngtd;
   this->latitude = lttd;
}

std::string Address::getCity() {
   return this->city;
}

std::string Address::getStreet() {
   return this->street;
}

std::string Address::toString() {
   return "[" + city + "," +
                  street + "," +
                  std::to_string(longitude) + "," +
                  std::to_string(latitude) +
            "]";
}