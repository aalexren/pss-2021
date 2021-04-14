//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_USER_H
#define HW4_USER_H

#include <string>

class User {
public:
   User(std::string &name, std::string &phoneNumber, std::string &password, double rating);

   std::string getName();
   std::string getPhoneNumber();
   std::string getPassword();
   double getRating();

   virtual std::string toString();

private:
   std::string name;
   std::string phoneNumber;
   std::string password;
   double rating;
};

#endif //HW4_USER_H
