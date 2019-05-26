cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled nokiaLabs/exercise2/main.cpp nokiaLabs/exercise2/Shape.cpp nokiaLabs/exercise2/Shape.h nokiaLabs/exercise2/Triangle.cpp nokiaLabs/exercise2/Triangle.h nokiaLabs/exercise2/Square.cpp nokiaLabs/exercise2/Square.h nokiaLabs/exercise2/Hexagon.cpp nokiaLabs/exercise2/Hexagon.h)