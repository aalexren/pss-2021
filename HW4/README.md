# Assignment 4 & 5

This work goals to earn some experience with developing big system
like Taxi service. Something went wrong, something well, so see 
the following criteria.

1. Implement 2 gate ways: passenger (mobile app), driver (mobile app);
2. Passenger, Driver, Admin, Car classes to be implemented

The idea is that the passenger can make order to get taxi and
all the communication should be provided using gateways and server.

My solution includes all the necessary definitions, some examples 
of "order" process.

The drivers have their own cars, the car can remains some stuff inside.
All the users have login, password, some personal data.

Some keys solutions:
1. GateWays are just mediators.
2. All the important stuff like login, makeOrder and etc. does the "Wendex" server class.
3. The idea behind to use loaded object and work with it instead of making many queries every time.
4. Some of the classes have loop dependencies.
5. Wendex considered to be Singleton class.

## Dependencies
1. CMake 3.15
2. C++ 14

## How to run
1. `$ git clone https://github.com/aalexren/pss-2021`
2. `$ cd HW4/`
3. `$ cmake`
4. `$ make`
5. `$ chmod 777 HW4`
6. `$ ./HW4`
