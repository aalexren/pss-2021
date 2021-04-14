//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_PASSENGER_H
#define HW4_PASSENGER_H

#include <vector>

#include "User.h"
#include "../System/Order.h"

enum PaymentMethods {
   Cash,
   Card
};

class Passenger : public User {
public:
   Passenger(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating);

   std::string toString();

private:
   std::vector<Order> orderHistory;
   std::vector<Address> pinnedAddress;
   PaymentMethods paymentMethods;

   friend class Wendex;
};

#endif //HW4_PASSENGER_H
