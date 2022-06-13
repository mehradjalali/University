cmake_minimum_required(VERSION 3.1.0)

project(University)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE
    Course.cpp
    Person.cpp
    Professor.cpp
    Student.cpp
    University.cpp)

add_executable(${PROJECT_NAME}
    main.cpp
   ${SOURCE}
)