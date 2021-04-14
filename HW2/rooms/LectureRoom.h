//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_LECTUREROOM_H
#define HW2_LECTUREROOM_H

#include "Room.h"

class LectureRoom : public Room {
public:
   explicit LectureRoom(const std::string& number, size_t floor, FireAlarm* fireAlarm);
};

#endif //HW2_LECTUREROOM_H
