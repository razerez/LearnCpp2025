cmake_minimum_required(VERSION 4.0)
project(LinkedList)

set(CMAKE_CXX_STANDARD 20)

add_executable(LinkedList main.cpp
        LinkedList.cpp
        Logic/LinkedList.h
        Node.cpp
        Logic/Node.h)
