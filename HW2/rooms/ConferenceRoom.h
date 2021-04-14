//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_CONFERENCEROOM_H
#define HW2_CONFERENCEROOM_H

#include "Room.h"

class ConferenceRoom : public Room {
public:
   explicit ConferenceRoom(const std::string& number, size_t floor, FireAlarm* fireAlarm);
};

#endif //HW2_CONFERENCEROOM_H
