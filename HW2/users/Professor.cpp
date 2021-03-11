//
// Created by Артём Черница on 24.02.21.
//

#include <string>
#include <vector>

#include "Professor.h"
#include "../Enums.h"

Professor::Professor(const std::string& name,
        const std::string& alias,
        size_t salary,
        const std::string& joke,
        const std::vector<std::string>& subjects)
      : User(name, alias, AccessLevel::YELLOW, salary) {
   this->joke = joke;
   this->subjects = subjects;
}

Professor::Professor(const std::string& name,
        size_t salary,
        const std::string& joke,
          const std::vector<std::string>& subjects)
      : User(name, AccessLevel::YELLOW, salary) {
   this->joke = joke;
   this->subjects = subjects;
}

std::string Professor::getJoke() {
   return joke;
}

std::vector<std::string> Professor::getSubjects() {
   return subjects;
}

std::string Professor::getInfo() {
   return User::getInfo() + "My favourite joke is: " + this->getJoke() + "\n";
}