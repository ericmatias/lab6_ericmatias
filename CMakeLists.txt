cmake_minimum_required(VERSION 3.7)
project(lab6_ericmatias)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp BinaryTreeInterface.h NotFoundException.h BinaryNode.h PrecondViolatedExcep.h BinaryNodeTree.h BinaryNodeTree.cpp)
add_executable(lab6_ericmatias ${SOURCE_FILES} BinaryTreeInterface.h NotFoundException.h BinaryNode.h PrecondViolatedExcep.h BinaryNodeTree.h BinaryNodeTree.cpp)