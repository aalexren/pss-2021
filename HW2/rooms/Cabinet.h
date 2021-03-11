//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_CABINET_H
#define HW2_CABINET_H

#include "Room.h"

class Cabinet : public Room {
public:
   explicit Cabinet(const std::string& number);
};

#endif //HW2_CABINET_H
