//
// Created by Артём Черница on 24.02.21.
//

#include "Cabinet.h"

Cabinet::Cabinet(const std::string& number)
      : Room(number, "classroom", AccessLevel::YELLOW) {
}