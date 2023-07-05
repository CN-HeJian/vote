cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 17)
project(vote_server)

find_package(PkgConfig)
pkg_check_modules(Pistache REQUIRED IMPORTED_TARGET libpistache)

add_executable(vote_server main.cpp)
target_link_libraries(${PROJECT_NAME} PkgConfig::Pistache)
