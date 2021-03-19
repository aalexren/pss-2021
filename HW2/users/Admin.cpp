//
// Created by Artyom Chernitsa on 23.02.21.
//

#include <iostream>

#include "Admin.h"

#include "../rooms/Room.h"

Admin::Admin(const std::string& name,
             const std::string& alias,
             size_t salary)
             : User(name, alias, AccessLevel::RED, salary) {

}

void Admin::upgradeAccess(User& user) {
   switch (user.accessLevel) {
      case AccessLevel::NO_LEVEL: user.accessLevel = AccessLevel::BLUE; break;
      case AccessLevel::BLUE: user.accessLevel = AccessLevel::GREEN; break;
      case AccessLevel::GREEN: user.accessLevel = AccessLevel::YELLOW; break;
      case AccessLevel::YELLOW: user.accessLevel = AccessLevel::RED; break;
      case AccessLevel::RED: user.accessLevel = AccessLevel::RED; break;
   }
   std::cout << "Access level for " + user.getName() + " has been upgraded" << std::endl;
}

void Admin::giveAccess(User& user, Room& room) {
   room.addGrantedUser(user);
   std::cout << "Access given to " + user.getName() + " for " + room.getNumber() + " room" << std::endl;
}

void Admin::depriveAccess(User& user, Room& room) {
   room.removeGrantedUser(user);
   std::cout << "Access taken back to " + user.getName() + " for " + room.getNumber() + " room" << std::endl;
}

size_t Admin::getSalary() {
   return salary;
}
