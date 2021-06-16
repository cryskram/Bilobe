cmake_minimum_required(VERSION 3.0.0)
project(bilobe VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories(include)

add_executable(bilobe main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

install(TARGETS bilobe DESTINATION /usr/bin/)
