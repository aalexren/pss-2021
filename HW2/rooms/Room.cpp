//
// Created by Артём Черница on 23.02.21.
//

#include <string>
#include <vector>
#include <iostream>

#include "../users/User.h"
#include "../Enums.h"
#include "Room.h"

std::string Room::getNumber() {
   return number;
}

std::string Room::getType() {
   return type;
}

AccessLevel Room::getAccessLevel() {
   return accessLevel;
}

std::vector<User> Room::getGrantedUsers() {
   return grantedUsers;
}

bool Room::giveAccess(User& user) {
   for (auto& user_: grantedUsers) {
      if (user.getID() == user_.getID()) {
         std::cout << user.getName() + " -> access allowed " + this->getNumber() << std::endl;
         return true;
      }
   }
   if (accessLevel == user.getAccessLevel()) {
      std::cout << user.getName() + " -> access allowed " + this->getNumber() << std::endl;
   }
   else {
//      if (user.amIDirector()) return accessLevel == user.getAccessLevel();
      std::cout << user.getName() + " -> access denied " + this->getNumber() << std::endl;
   }
   return accessLevel == user.getAccessLevel();
}

Room::Room(const std::string& number, const std::string& type, AccessLevel accessLevel) {
   this->number = number;
   this->type = type;
   this->accessLevel = accessLevel;
}

void Room::addGrantedUser(User& user) {
   for (auto& granted: grantedUsers) {
      if (granted.getID() == user.getID()) return;
   }
   grantedUsers.push_back(user);
}

void Room::removeGrantedUser(User& user) {
   for (size_t i = 0; i < grantedUsers.size(); ++i) {
      if (user.getID() == grantedUsers[i].getID()) {
         grantedUsers.erase(grantedUsers.begin() + i);
         return;
      }
   }
}