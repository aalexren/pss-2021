//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_DIRECTOR_H
#define HW2_DIRECTOR_H

#include <string>

#include "User.h"
#include "IGetWages.h"

class Director : public User, public IGetWages {
public:
   Director(const std::string& name,
            const std::string& alias,
            size_t salary);

   Director(const std::string& name,
            size_t salary);

   size_t getSalary() override;
};

#endif //HW2_DIRECTOR_H
