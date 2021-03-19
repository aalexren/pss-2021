//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_ADMIN_H
#define HW2_ADMIN_H

#include <string>

#include "User.h"
#include "../rooms/Room.h"
#include "IGetWages.h"

class Admin : public User, public IGetWages {
public:
   Admin(const std::string& name,
         const std::string& alias,
         size_t salary);

   void upgradeAccess(User& user);

   void giveAccess(User& user, Room& room);

   void depriveAccess(User& user, Room& room);

   size_t getSalary() override;
};

#endif //HW2_ADMIN_H
