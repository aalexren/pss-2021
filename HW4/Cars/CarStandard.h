//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_CARSTANDARD_H
#define HW4_CARSTANDARD_H

#include "Car.h"

class CarStandard : public Car {
public:
   CarStandard(const std::string &model, const std::string &number, Colors color);
};

#endif //HW4_CARSTANDARD_H
