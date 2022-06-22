cmake_minimum_required(VERSION 3.0.0)
project(canAnalyzer VERSION 0.1.0)

#include(CTest)
#enable_testing()

#Locate Project requires
add_library(Canlib UNKNOWN IMPORTED)

add_executable(canAnalyzer main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
