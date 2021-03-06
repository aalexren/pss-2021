//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_DIRECTOR_H
#define HW2_DIRECTOR_H

#include <string>

#include "User.h"

class Director : public User {
public:
   Director(const std::string& name,
            const std::string& alias,
            size_t salary);

   Director(const std::string& name,
            size_t salary);
};

#endif //HW2_DIRECTOR_H
