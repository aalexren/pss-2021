//
// Created by Artyom Chernitsa on 23.02.21.
//

#include <iostream>

#include "DirectorCabinet.h"

#include "../users/Director.h"

DirectorCabinet::DirectorCabinet(const std::string& number, size_t floor, FireAlarm* fireAlarm)
      : Room(number, "isDirector cabinet", AccessLevel::RED, floor, fireAlarm) {
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