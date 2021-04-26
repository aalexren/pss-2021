//
// Created by Artyom Chernitsa on 14.04.21.
//

#ifndef HW4_ADDRESS_H
#define HW4_ADDRESS_H

#include <string>

class Address {
public:
   Address(const std::string& city, const std::string& street); // mock constructor
   Address(const std::string& city, const std::string& street, double lngtd, double lttd);

   std::string getCity();
   std::string getStreet();

   std::string toString();

private:
   std::string city;
   std::string street;

   double longitude;
   double latitude;
};

#endif //HW4_ADDRESS_H
