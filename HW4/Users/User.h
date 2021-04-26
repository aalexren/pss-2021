//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_USER_H
#define HW4_USER_H

#include <string>

class User {
public:
   User(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating);
   User(const std::string &name, const std::string &phoneNumber, const std::string &password);

   User() {};

   std::string getName();
   std::string getPhoneNumber();
   std::string getPassword();
   double getRating();

   std::string getID();

   virtual std::string toString();

private:
   std::string name;
   std::string phoneNumber;
   std::string password;
   double rating;
   long long int ID;
};

#endif //HW4_USER_H
