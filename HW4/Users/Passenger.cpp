//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "Passenger.h"

std::string Passenger::toString() {
   return User::toString();
}

Passenger::Passenger(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating) : User(name,
                                                                                                               phoneNumber,
                                                                                                               password,
                                                                                                               rating) {

}
