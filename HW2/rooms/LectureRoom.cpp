//
// Created by Artyom Chernitsa on 23.02.21.
//

#include "LectureRoom.h"

LectureRoom::LectureRoom(const std::string& number, size_t floor, FireAlarm* fireAlarm)
   : Room(number, "lecture room", (floor == 1 ? AccessLevel::BLUE : AccessLevel::YELLOW), floor, fireAlarm) {

}