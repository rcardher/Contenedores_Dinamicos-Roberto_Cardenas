//
// Created by Roberto C on 18/12/24.
//

#include <iostream>
#include <boost/lexical_cast.hpp>
#include "Boost.h"

void ejercicio6() {
    std::string s = "12345";

    try {
        // Convertir de string a int usando Boost
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número convertido: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error de conversión: " << e.what() << std::endl;
    }
}

