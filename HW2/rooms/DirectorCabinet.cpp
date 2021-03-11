//
// Created by Артём Черница on 24.02.21.
//

#include <iostream>

#include "DirectorCabinet.h"

#include "../users/Director.h"

DirectorCabinet::DirectorCabinet(const std::string& number)
      : Room(number, "director cabinet", AccessLevel::RED) {
}

bool DirectorCabinet::giveAccess(User& user) {
   bool temp = Room::giveAccess(user);
   if (temp) {
      return temp;
   } // if we fucked up we continue
   else if (user.amIDirector()) {
      std::cout << "access allowed " + this->getNumber() + "\n";
   }
   return user.amIDirector();
}