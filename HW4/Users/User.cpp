//
// Created by Artyom Chernitsa on 13.04.21.
//

#include <string>

#include "User.h"

User::User(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating) {
   this->name = name;
   this->phoneNumber = phoneNumber;
   this->password = password;
   this->rating = rating;
   static long long int id = 0;
   this->ID = id++;
}

User::User(const std::string &name, const std::string &phoneNumber, const std::string &password) {
   this->name = name;
   this->phoneNumber = phoneNumber;
   this->password = password;
   this->rating = -1;
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
   return "[" + name + "," +
                     phoneNumber + "," +
                     std::to_string(rating) +
               "]";
}

std::string User::getID() {
   return std::to_string(ID);
}
