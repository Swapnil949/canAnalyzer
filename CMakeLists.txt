cmake_minimum_required(VERSION 3.0.0)

# Set the C/C++ standard we will use
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)



# Add the path of the cmake files to the CMAKE_MODULE_PATH
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)


find_package(canlib REQUIRED)

project(canAnalyzer VERSION 0.1.0)

#include(CTest)
#enable_testing()

#Locate Project requires

set(SRC_FILES
    main.cpp
)
set(BIN
    ${PROJECT_NAME}
)

include_directories(canlib/inc)


# build the executable
add_executable(${BIN} ${SRC_FILES})
target_link_libraries(${BIN} ${CANLIB_LIBRARY})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
