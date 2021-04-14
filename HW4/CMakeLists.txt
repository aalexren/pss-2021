cmake_minimum_required(VERSION 3.15)
project(HW4)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW4 main.cpp
        Users/Passenger.cpp Users/Passenger.h
        Users/Driver.cpp Users/Driver.h
        Users/User.cpp Users/User.h
        Cars/Vehicle.cpp Cars/Vehicle.h
        System/Order.cpp System/Order.h
        Cars/Car.cpp Cars/Car.h
        Cars/CarEconomy.cpp Cars/CarEconomy.h
        Cars/CarStandard.cpp Cars/CarStandard.h
        Cars/CarComfort.cpp Cars/CarComfort.h
        Cars/CarBusiness.cpp Cars/CarBusiness.h
        System/Date.cpp System/Date.h
        System/Address.cpp System/Address.h
        GateWays/PassengerGateway.cpp GateWays/PassengerGateway.h
        GateWays/DriverGateway.cpp GateWays/DriverGateway.h
        System/Wendex.cpp System/Wendex.h
        System/PreOrder.cpp System/PreOrder.h)