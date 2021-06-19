cmake_minimum_required(VERSION 3.0.0)
project(bilobe VERSION 1.3.0)

include_directories(include)

add_executable(bilobe main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CPACK_GENERATOR "DEB;TGZ;TZ")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "GN Vageesh")
include(CPack)

install(TARGETS bilobe DESTINATION {PROJECT_BINARY_DIR}/bin/)
