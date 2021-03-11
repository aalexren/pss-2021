//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_CONFERENCEROOM_H
#define HW2_CONFERENCEROOM_H

#include "Room.h"

class ConferenceRoom : public Room {
public:
   explicit ConferenceRoom(const std::string& number);
};

#endif //HW2_CONFERENCEROOM_H
