//
// Created by Roberto C on 18/12/24.
//

#include <iostream>
#include <boost/lexical_cast.hpp>
#include "Boost.h"

void ejercicio6() {
    std::string s = "12345"; // Definimos una cadena de texto que contiene un número como texto

    try {
        // Convertir de string a int usando Boost
        // boost::lexical_cast es una función útil de la librería Boost que convierte tipos de datos
        int i = boost::lexical_cast<int>(s); // Aquí convertimos la cadena 's' a un entero
        std::cout << "Número convertido: " << i << std::endl; // Imprimimos el número convertido
    } catch(boost::bad_lexical_cast &e) {
        // Si ocurre un error durante la conversión, entramos en el bloque catch
        std::cerr << "Error de conversión: " << e.what() << std::endl; // Mostramos el mensaje de error
    }
}


