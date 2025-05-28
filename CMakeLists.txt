cmake_minimum_required(VERSION 3.26)
project(MyLibrary LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API ON)

add_library(mylib)

# Modul-gränssnitt
target_sources(mylib
  PUBLIC
    FILE_SET cxx_modules TYPE CXX_MODULES FILES
      modules/vector.cppm
      modules/crypto.cppm
  PRIVATE
    src/vector_impl.cpp
    src/crypto_impl.cpp
)

add_executable(test_exec tests/test_main.cpp)
target_link_libraries(test_exec PRIVATE mylib)

