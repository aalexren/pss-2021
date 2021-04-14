//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "CarEconomy.h"

CarEconomy::CarEconomy(std::string &model, std::string &number, Colors color) : Car(model, number, color) {
   this->CPM = CPM * 0.85;
}