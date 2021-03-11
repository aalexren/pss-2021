//
// Created by Артём Черница on 24.02.21.
//

#include "Director.h"

Director::Director(const std::string& name,
         const std::string& alias,
         size_t salary)
      : User(name, alias, AccessLevel::RED, salary) {
   director = true;
}

Director::Director(const std::string& name,
         size_t salary)
      : User(name, AccessLevel::RED, salary) {
   director = true;
}

