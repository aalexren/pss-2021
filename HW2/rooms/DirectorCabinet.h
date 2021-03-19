//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_DIRECTORCABINET_H
#define HW2_DIRECTORCABINET_H

#include "Room.h"                                  

class DirectorCabinet : public Room {
public:
   explicit DirectorCabinet(const std::string& number, size_t floor, FireAlarm* fireAlarm);
   bool giveAccess(User& user) override;
};

#endif //HW2_DIRECTORCABINET_H
