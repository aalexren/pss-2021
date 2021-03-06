//
// Created by Артём Черница on 23.02.21.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H

#include <vector>
#include <string>
#include <typeinfo>

#include "../users/User.h"

class Room {
public:
   std::string getNumber();

   std::string getType();

   AccessLevel getAccessLevel();

   std::vector<User> getGrantedUsers();

   virtual bool giveAccess(User& user);

protected:
   Room(const std::string& number, const std::string& type, AccessLevel accessLevel);

private:
   std::string number; // e.g. 312-A
   std::string type; // kind of room (e.g. conference, meeting etc.)
   AccessLevel accessLevel;
   std::vector<User> grantedUsers;
   friend class Admin; // special field to get access to private members of this class

   void addGrantedUser(User& user);
   void removeGrantedUser(User& user);
};

#endif //HW2_ROOM_H
