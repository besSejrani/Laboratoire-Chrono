cmake_minimum_required(VERSION 3.20)
project(Laboratoire5_Chrono)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Werror -Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(Laboratoire5_Chrono main.cpp Fonctions/Saisie/saisie.cpp Fonctions/Saisie/saisie.h Fonctions/Generateur/generateur.cpp Fonctions/Generateur/generateur.h Fonctions/Temps/temps.cpp Fonctions/Temps/temps.h)
