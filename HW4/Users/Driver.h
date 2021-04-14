//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_DRIVER_H
#define HW4_DRIVER_H

#include "User.h"
#include "../Cars/Car.h"

enum WorkStatus {
   Free,
   Ride
};

class Driver : public User {
public:
   Driver(const std::string &name, const std::string &phoneNumber, const std::string &password, double rating, Car *car);

   std::string toString();
   WorkStatus getWorkStatus();

private:
   Car* car;
   WorkStatus workStatus;
};

#endif //HW4_DRIVER_H
