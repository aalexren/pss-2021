//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "CarComfort.h"

CarComfort::CarComfort(std::string &model, std::string &number, Colors color) : Car(model, number, color) {
   this->CPM = CPM * 2;
   this->freeBottleOfWater = rand()%10;
}