//
// Created by Artyom Chernitsa on 26.04.2021.
//

#ifndef HW4_ADMIN_H
#define HW4_ADMIN_H

#include "User.h"
#include "Passenger.h"

enum Commands {

};

class Admin : public User {
public:
   Admin(const std::string &name, const std::string &phoneNumber, const std::string &password);

   std::string toString();

   void blockUserFunction(Passenger &psgr, Commands cmd);
};

#endif //HW4_ADMIN_H
