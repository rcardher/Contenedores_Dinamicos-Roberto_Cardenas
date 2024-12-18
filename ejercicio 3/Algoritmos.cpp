//
// Created by Roberto C on 18/12/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "Algoritmos.h"

void ejecutarEjercicio3() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    // Para ordenar el vector
    std::sort(numeros.begin(), numeros.end());

    std::cout << "\nEjercicio 3: Algoritmos\n";
    std::cout << "Vector ordenado: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Para encontrar el número máximo
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;
}

