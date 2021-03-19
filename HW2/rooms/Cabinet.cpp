//
// Created by Artyom Chernitsa on 24.02.21.
//

#include "Cabinet.h"

Cabinet::Cabinet(const std::string& number, size_t floor, FireAlarm* fireAlarm)
      : Room(number, "classroom", AccessLevel::YELLOW, floor, fireAlarm) {
}