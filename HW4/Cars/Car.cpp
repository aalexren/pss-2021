//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "Car.h"

Car::Car(const std::string &model, const std::string &number, Colors color) {
   this->model = model;
   this->number = number;
   this->color = color;
   // TODO
   this->currentAddress = new Address("Innopolis", "Universitetskaya"); // crutch
   this->CPM = 5;
}
