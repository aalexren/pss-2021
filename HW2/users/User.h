//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_USER_H
#define HW2_USER_H

#include <string>
#include <vector>

#include "../Enums.h"

class User {
public:
   std::string getName();

   std::string getAlias();

   AccessLevel getAccessLevel();

//   size_t getSalary();

   size_t getID();

   virtual std::string getInfo();

   bool amIDirector();

protected:
   User(const std::string& name, const std::string& alias, AccessLevel accessLevel, size_t salary);

   User(const std::string& name, AccessLevel accessLevel, size_t salary);

   User(const std::string& name, AccessLevel accessLevel);

   bool isDirector; // is this user isDirector?

   size_t salary;

private:
   User();
   std::string name; // first name, second name
   std::string alias; // telegram alias
   AccessLevel accessLevel;
   size_t id; // unique ID for certain user
   friend class Admin; // special field to get access to private members of this class

   std::string accessLevelToString();
};

#endif //HW2_USER_H
