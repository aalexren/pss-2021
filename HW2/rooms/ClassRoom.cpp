//
// Created by Артём Черница on 24.02.21.
//

#include "ClassRoom.h"

ClassRoom::ClassRoom(const std::string& number)
: Room(number, "classroom", AccessLevel::GREEN) {
}