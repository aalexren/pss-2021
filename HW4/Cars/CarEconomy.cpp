//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "CarEconomy.h"

CarEconomy::CarEconomy(const std::string &model, const std::string &number, Colors color) : Car(model, number, color) {
   this->CPM = CPM * 0.85;
}