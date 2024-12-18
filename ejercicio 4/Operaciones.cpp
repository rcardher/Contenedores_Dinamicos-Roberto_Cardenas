//
// Created by Roberto C on 18/12/24.
//

#include <iostream>
#include <valarray>
#include "operaciones.h"

void ejecutarEjercicio4() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "\nEjercicio 4: Cálculo Numérico\n";

    // Operaciones básicas
    std::cout << "Suma de todos los elementos: " << valores.sum() << std::endl;

    std::valarray<double> suma = valores + 5.0;
    std::cout << "Suma de 5 a cada elemento: ";
    for (double valor : suma) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    std::valarray<double> multiplicacion = valores * 2.0;
    std::cout << "Multiplicación por 2 de cada elemento: ";
    for (double valor : multiplicacion) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    // División ejemplo
    std::valarray<double> division = valores / 2.0;
    std::cout << "División por 2 de cada elemento: ";
    for (double valor : division) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}

