SET(TEST_UNIT "SingletonTests")
SET(TEST_UNIT_MODULE_NAME "Singleton")
SET(TEST_UNIT_MODULE_DIRECTORY "Singleton")

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

if(NOT GTEST_FOUND)
    message(WARNING "Failed to find the GTest libraries.")
endif()

file(GLOB_RECURSE TEST_BUILDER_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/${TEST_UNIT_MODULE_DIRECTORY}/*.cpp)

add_executable(${TEST_UNIT} ${TEST_BUILDER_SOURCE_FILES})
target_link_libraries(${TEST_UNIT} gtest gtest_main pthread ${MODULE_NAME})

add_test(NAME ${TEST_UNIT} COMMAND ${TEST_UNIT})
