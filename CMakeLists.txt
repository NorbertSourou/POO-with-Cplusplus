cmake_minimum_required(VERSION 3.16)
project(eneck)

set(CMAKE_CXX_STANDARD 14)

add_executable(eneck main.cpp Langage.cpp Langage.h Mots_cles.cpp Mots_cles.h Domaine.cpp Domaine.h)