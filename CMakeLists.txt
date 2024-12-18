cmake_minimum_required(VERSION 3.29)
project(Contenedores_Dinamicos_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

# Ajustamos la ruta de Boost
set(BOOST_ROOT "/usr/local/opt/boost")

# Buscamos Boost
find_package(Boost REQUIRED)

# Agregamos los directorios de inclusión de Boost
include_directories(${Boost_INCLUDE_DIRS})

add_executable(Contenedores_Dinamicos_Roberto_Cardenas
        main.cpp
        "ejercicio 2/List.h"
        "ejercicio 2/List.cpp"
        "ejercicio 3/Algoritmos.h"
        "ejercicio 3/Algoritmos.cpp"
        "ejercicio 4/Operaciones.cpp"
        "ejercicio 5/Moderno.cpp"
        "ejercicio 6/Boost.h"
        "ejercicio 6/Boost.cpp"
)

target_link_libraries(Contenedores_Dinamicos_Roberto_Cardenas)






