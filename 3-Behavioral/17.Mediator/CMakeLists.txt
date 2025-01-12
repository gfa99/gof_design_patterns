SET(MODULE_NAME "Mediator")
#SET(MODULE_DIRECTORY "17.Mediator")

set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# including source code
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(PROJECT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

file(GLOB MEDIATOR_SOURCE_FILES_TOP "${PROJECT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE MEDIATOR_SOURCE_FILES_NESTED ${PROJECT_SOURCE_DIR}/*.cpp)
set(MEDIATOR_SOURCE_FILES ${MEDIATOR_SOURCE_FILES_TOP} ${MEDIATOR_SOURCE_FILES_NESTED})

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_library(${MODULE_NAME} SHARED ${MEDIATOR_SOURCE_FILES})
target_include_directories(${MODULE_NAME} PUBLIC ${PROJECT_INCLUDE_DIR})

add_executable(MediatorPattern ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_libraries(MediatorPattern ${MODULE_NAME})
