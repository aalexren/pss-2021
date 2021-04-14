//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_CARECONOMY_H
#define HW4_CARECONOMY_H

#include "Car.h"

class CarEconomy : public Car {
public:
   CarEconomy(std::string &model, std::string &number, Colors color);
};

#endif //HW4_CARECONOMY_H
