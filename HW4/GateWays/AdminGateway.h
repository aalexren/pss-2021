//
// Created by Artyom Chernitsa on 26.04.2021.
//

#ifndef HW4_ADMINGATEWAY_H
#define HW4_ADMINGATEWAY_H

#include "../System/Wendex.h"
#include "../Users/Admin.h"

class AdminGateway {
public:
   AdminGateway(Wendex* wendex) {

   }

   void login(Admin *admin, std::string &phoneNumber, std::string &password);

};

#endif //HW4_ADMINGATEWAY_H
