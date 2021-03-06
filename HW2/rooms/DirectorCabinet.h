//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_DIRECTORCABINET_H
#define HW2_DIRECTORCABINET_H

#include "Room.h"                                  

class DirectorCabinet : public Room {
public:
   explicit DirectorCabinet(const std::string& number);
   bool giveAccess(User& user) override;
};

#endif //HW2_DIRECTORCABINET_H
