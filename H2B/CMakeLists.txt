cmake_minimum_required(VERSION 3.16)

project(H2B LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2B main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS H2B
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
