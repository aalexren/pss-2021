//
// Created by Artyom Chernitsa on 23.02.21.
//

#include "Director.h"

Director::Director(const std::string& name,
         const std::string& alias,
         size_t salary)
      : User(name, alias, AccessLevel::RED, salary) {
   isDirector = true;
}

Director::Director(const std::string& name,
         size_t salary)
      : User(name, AccessLevel::RED, salary) {
   isDirector = true;
}

size_t Director::getSalary() {
   return salary;
}
