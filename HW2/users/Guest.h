//
// Created by Artyom Chernitsa on 19.03.21.
//

#ifndef HW2_GUEST_H
#define HW2_GUEST_H

#include "User.h"

class Guest : public User {
public:
   Guest(const std::string& name);
};

#endif //HW2_GUEST_H
