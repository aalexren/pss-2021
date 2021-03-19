//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_EMPLOYEE_H
#define HW2_EMPLOYEE_H

#include <string>

#include "User.h"
#include "../Enums.h"
#include "IGetWages.h"

class Employee : public User, public IGetWages {
public:
   Employee(const std::string& name,
             const std::string& alias,
             size_t salary,
             Laborathory lab);

   Employee(const std::string& name,
             size_t salary,
             Laborathory lab);

   Laborathory getLaborathory();

   size_t getSalary() override;

private:
   Laborathory lab; // laborathory employee works for
};

#endif //HW2_EMPLOYEE_H
