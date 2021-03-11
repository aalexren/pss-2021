cmake_minimum_required(VERSION 3.15)
project(HW2)

set(CMAKE_CXX_STANDARD 17)

add_executable(HW2 main.cpp
        Enums.h

        users/User.cpp
        users/User.h
        users/Admin.cpp
        users/Admin.h
        users/Student.cpp
        users/Student.h
        users/Professor.cpp
        users/Professor.h
        users/Employee.cpp
        users/Employee.h
        users/Director.cpp
        users/Director.h

        rooms/Room.h
        rooms/Room.cpp
        rooms/ClassRoom.cpp
        rooms/ClassRoom.h
        rooms/LectureRoom.cpp
        rooms/LectureRoom.h
        rooms/ConferenceRoom.cpp
        rooms/ConferenceRoom.h
        rooms/Cabinet.cpp
        rooms/Cabinet.h
        rooms/DirectorCabinet.cpp
        rooms/DirectorCabinet.h)