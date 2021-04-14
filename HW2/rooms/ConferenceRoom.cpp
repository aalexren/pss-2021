//
// Created by Artyom Chernitsa on 23.02.21.
//

#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(const std::string& number, size_t floor, FireAlarm* fireAlarm)
      : Room(number, "classroom", (floor == 1 ? AccessLevel::BLUE : AccessLevel::RED), floor, fireAlarm) {
}