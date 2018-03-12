project(cppsqlite)
cmake_minimum_required(VERSION 2.8)

add_library(cppsqlite3 CppSQLite3.cpp)
add_executable(cppsqlite3demo CppSQLite3Demo.cpp)

target_link_libraries(cppsqlite3 sqlite3)
target_link_libraries(cppsqlite3demo cppsqlite3)
