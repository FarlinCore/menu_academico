cmake_minimum_required(VERSION 4.3)
project(Sistema_de_menu_academico C)

set(CMAKE_C_STANDARD 11)

add_executable(Sistema_de_menu_academico main.c
        calculos.c
        calculos.h)
