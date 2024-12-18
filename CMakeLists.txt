cmake_minimum_required(VERSION 3.29)
project(Contenedores_Dinamicos_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

# Busca Boost explícitamente en caso de que CMake no lo encuentre automáticamente
set(BOOST_ROOT "/usr/local/opt/boost") # Ajusta esta ruta si es diferente en tu sistema
find_package(Boost REQUIRED)

# Agrega los directorios de inclusión de Boost
include_directories(${Boost_INCLUDE_DIRS})

add_executable(Contenedores_Dinamicos_Roberto_Cardenas
        main.cpp
        "ejercicio 2/List.h"
        "ejercicio 2/List.cpp"
        "ejercicio 3/Algoritmos.h"
        "ejercicio 3/Algoritmos.cpp"
        "ejercicio 4/Operaciones.cpp"
)

# Vincula las bibliotecas de Boost si es necesario (aquí probablemente no sea obligatorio)
# target_link_libraries(Contenedores_Dinamicos_Roberto_Cardenas Boost::Boost)

