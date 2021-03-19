//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_CLASSROOM_H
#define HW2_CLASSROOM_H

#include "Room.h"

class ClassRoom : public Room {
public:
   explicit ClassRoom(const std::string& number, size_t floor, FireAlarm* fireAlarm);
};

#endif //HW2_CLASSROOM_H
