cmake_minimum_required(VERSION 3.16)
project(Laboratoire5_Chrono)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(LaboChrono main.cpp Fonctions/Saisie/saisie.cpp
        Fonctions/Saisie/saisie.h Fonctions/Generateur/generateur.cpp Fonctions/Generateur/generateur.h)
