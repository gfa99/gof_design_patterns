cmake_minimum_required(VERSION 3.6)
project(GOF-Design-Patterns)

option(ENABLE_TESTS
        "Set to OFF|ON (default: OFF) to control building the tests" OFF)

if (ENABLE_TESTS)
    enable_testing()
    message(STATUS "Building project with tests")
elseif ()
    message(STATUS "Building project without tests")
endif ()

add_subdirectory(1-Creational)
add_subdirectory(2-Structural)
add_subdirectory(3-Behavioral)
