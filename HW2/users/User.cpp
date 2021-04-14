//
// Created by Artyom Chernitsa on 23.02.21.
//

#include <string>
#include <vector>

#include "../Enums.h"
#include "../rooms/Room.h"
#include "User.h"

std::string User::getName() {
   return name;
}

std::string User::getAlias() {
   return alias;
}

AccessLevel User::getAccessLevel() {
   return accessLevel;
}

//size_t User::getSalary() {
//   return salary;
//}

size_t User::getID() {
   return id;
}

std::string User::getInfo() {
   return "I am " + name + ", my alias is: " + (!alias.empty() ? alias : "<absent>") + "." + "\n"
          + "I have an " + accessLevelToString() + " access level.\n";
}

bool User::amIDirector() {
   return isDirector;
}

User::User(const std::string& name, const std::string& alias, AccessLevel accessLevel, size_t salary) : User() {
   this->name = name;
   this->alias = alias;
   this->accessLevel = accessLevel;
   this->salary = salary;
   isDirector = false;
}

User::User(const std::string& name, AccessLevel accessLevel, size_t salary) : User() {
   this->name = name;
   this->accessLevel = accessLevel;
   this->salary = salary;
   isDirector = false;
}

User::User(const std::string& name, AccessLevel accessLevel) : User() {
   this->name = name;
   this->accessLevel = accessLevel;
   isDirector = false;
}

User::User() {
   accessLevel = AccessLevel::NO_LEVEL;
   salary = 0;
   static size_t call = 0; // make unique ID
   call++;
   id = call;
   isDirector = false;
}

std::string User::accessLevelToString() {
   if (accessLevel == AccessLevel::NO_LEVEL) {
      return "NO_LEVEL";
   }
   if (accessLevel == AccessLevel::BLUE) {
      return "BLUE";
   }
   if (accessLevel == AccessLevel::GREEN) {
      return "GREEN";
   }
   if (accessLevel == AccessLevel::YELLOW) {
      return "YELLOW";
   }
   if (accessLevel == AccessLevel::RED) {
      return "RED";
   }

   return "NO_LEVEL";
}