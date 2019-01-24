cmake_minimum_required(VERSION 3.13)
project(CsvParser)

set(CMAKE_CXX_STANDARD 17)

add_executable(CsvParser main.cpp CSVReader.cpp CSVReader.h)