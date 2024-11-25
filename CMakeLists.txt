cmake_minimum_required(VERSION 3.29)
project(LibreriaEstandarC)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ej1)

add_executable(LibreriaEstandarC
    Ej1/funcionesComunes.cpp
    Ej1/funcionesComunes.h
        main.cpp
        Ej2/cadenas.cpp
        Ej3/archivos.h
        Ej3/archivos.cpp)
