cmake_minimum_required(VERSION 3.0)

set(myproject "TIME-MEASUREMENT-C++")
project(my_project)

#this alows use to run the executables made after the `make install` command is executed by the user
set(CMAKE_MACOSX_RPATH 1)
# the RPATH to be used when installing
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

add_subdirectory(tests)

add_library(timer SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/timer.cc)

target_include_directories(timer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(TARGETS timer LIBRARY DESTINATION lib)