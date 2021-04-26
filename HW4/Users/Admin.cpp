//
// Created by Artyom Chernitsa on 26.04.2021.
//

#include "Admin.h"

Admin::Admin(const std::string &name, const std::string &phoneNumber, const std::string &password) :
   User(name, phoneNumber, password){

}

void Admin::blockUserFunction(Passenger &psgr, Commands cmd) {

}

std::string Admin::toString() {
   return User::toString();
}
