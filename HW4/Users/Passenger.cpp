//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "Passenger.h"

std::string Passenger::toString() {
   return User::toString();
}

Passenger::Passenger(std::string &name, std::string &phoneNumber, std::string &password, double rating) : User(name,
                                                                                                               phoneNumber,
                                                                                                               password,
                                                                                                               rating) {

}
