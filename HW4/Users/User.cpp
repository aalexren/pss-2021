//
// Created by Artyom Chernitsa on 13.04.21.
//

#include <string>

#include "User.h"

User::User(std::string &name, std::string &phoneNumber, std::string &password, double rating) {
   this->name = name;
   this->phoneNumber = phoneNumber;
   this->password = password;
   this->rating = rating;
}

std::string User::getName() {
   return this->name;
}

std::string User::getPhoneNumber() {
   return this->phoneNumber;
}

std::string User::getPassword() {
   return this->password;
}

double User::getRating() {
   return this->rating;
}

std::string User::toString() {
   return "User:[" + name + "," +
                     phoneNumber + "," +
                     std::to_string(rating) +
               "]";
}
