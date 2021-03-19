//
// Created by Artyom Chernitsa on 23.02.21.
//

#include "ClassRoom.h"

ClassRoom::ClassRoom(const std::string& number, size_t floor, FireAlarm* fireAlarm)
: Room(number, "classroom", AccessLevel::GREEN, floor, fireAlarm) {
}