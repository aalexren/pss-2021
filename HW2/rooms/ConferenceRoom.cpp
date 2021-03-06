//
// Created by Артём Черница on 24.02.21.
//

#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(const std::string& number)
      : Room(number, "classroom", AccessLevel::RED) {
}