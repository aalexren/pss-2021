//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_EMPLOYEE_H
#define HW2_EMPLOYEE_H

#include <string>

#include "User.h"
#include "../Enums.h"

class Employee : public User {
public:
   Employee(const std::string& name,
             const std::string& alias,
             size_t salary,
             Laborathory lab);

   Employee(const std::string& name,
             size_t salary,
             Laborathory lab);

   Laborathory getLaborathory();

private:
   Laborathory lab; // laborathory employee works for
};

#endif //HW2_EMPLOYEE_H
