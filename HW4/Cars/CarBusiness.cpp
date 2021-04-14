//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "CarBusiness.h"

CarBusiness::CarBusiness(std::string &model, std::string &number, Colors color) : Car(model, number, color) {
   this->CPM = CPM * 3;
}

void CarBusiness::parkRightInFrontOfEntrance() {
   // TODO
}
