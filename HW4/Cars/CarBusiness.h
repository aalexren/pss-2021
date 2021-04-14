//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_CARBUSINESS_H
#define HW4_CARBUSINESS_H

#include <string>

#include "Car.h"

class CarBusiness : public Car {
public:
   CarBusiness(std::string &model, std::string &number, Colors color);

   void parkRightInFrontOfEntrance();
};

#endif //HW4_CARBUSINESS_H
