cmake_minimum_required(VERSION 3.29)
project(Activity_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Activity_3
    main.cpp
    Person.cpp
    Person.h
    Student.cpp
    Student.h
        Footballer.cpp
        Footballer.h)
