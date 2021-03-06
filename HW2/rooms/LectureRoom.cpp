//
// Created by Артём Черница on 24.02.21.
//

#include "LectureRoom.h"

LectureRoom::LectureRoom(const std::string& number)
   : Room(number, "lecture room", AccessLevel::YELLOW) {

}