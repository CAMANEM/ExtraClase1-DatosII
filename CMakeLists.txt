cmake_minimum_required(VERSION 3.17)
project(ExtraClase_I)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExtraClase_I main.cpp simpleLinkedList/Node.cpp simpleLinkedList/Node.h simpleLinkedList/LinkedList.cpp simpleLinkedList/LinkedList.h CollectorPackage/Collector.cpp CollectorPackage/Collector.h)