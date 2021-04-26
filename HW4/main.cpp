#include <iostream>

#include "../temp/System/Wendex.h"
#include "../temp/System/Address.h"

#include "../temp/Cars/CarStandard.h"
#include "../temp/Cars/CarBusiness.h"

#include "../temp/GateWays/DriverGateway.h"
#include "../temp/GateWays/PassengerGateway.h"

using namespace std;

int main() {

   Wendex wendex;

   Address a("Moscow", "Universitetskaya 25");
   Address b("Innopolis", "Universitetskaya 26");

   CarStandard c1("Mitsubishi Lancer Evolution IX", "A555AA", Colors::Red);
   CarBusiness c2("Lexus", "C597EA", Colors::DarkBlue);

   Passenger p1("Mike", "+79645266767", "password", 4.5);
   Driver d1("Alisa", "+79998967878", "password", 4.7, &c1);

   DriverGateway dgt(&wendex);
   PassengerGateway pgw(&wendex);

   pgw.login(&p1, (string &) "+79645266767", (string &) "password");
   dgt.login(&d1, (string &) "+79998967878", (string &) "12345678");

   pgw.seeOrderHistory(p1);

   return 0;
}
