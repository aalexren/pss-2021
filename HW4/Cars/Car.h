//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_CAR_H
#define HW4_CAR_H

#include <string>

#include "Vehicle.h"
#include "../System/Address.h"

enum Colors {
   Red,
   Orange,
   Yellow,
   Green,
   Blue,
   DarkBlue,
   Violet
};

class Car : public Vehicle {
public:
   Car(const std::string& model, const std::string& number, Colors color);

protected:
   double CPM; // cost per kilometer

private:
   std::string model;
   std::string number;
   Colors color;
   Address* currentAddress;
};

#endif //HW4_CAR_H
