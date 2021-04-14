//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_CARCOMFORT_H
#define HW4_CARCOMFORT_H

#include "Car.h"

class CarComfort : public Car {
public:
   CarComfort(std::string &model, std::string &number, Colors color);
private:
   int freeBottleOfWater; // count in the car
};

#endif //HW4_CARCOMFORT_H
