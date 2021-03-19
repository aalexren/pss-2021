//
// Created by Artyom Chernitsa on 23.02.21.
//

#include "Employee.h"

Employee::Employee(const std::string& name,
          const std::string& alias,
          size_t salary,
          Laborathory lab)
      : User(name, alias, AccessLevel::YELLOW, salary) {
   this->lab = lab;
}

Employee::Employee(const std::string& name,
          size_t salary,
          Laborathory lab)
      : User(name, AccessLevel::YELLOW, salary) {
   this->lab = lab;
}

Laborathory Employee::getLaborathory() {
   return lab;
}

size_t Employee::getSalary() {
   return salary;
}