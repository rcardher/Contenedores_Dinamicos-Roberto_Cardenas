//
// Created by Roberto C on 18/12/24.
//

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "moderno.h"

void ejecutarEjercicio5() {
    std::cout << "\nEjercicio 5: C++ Moderno\n";

    // Lambda para calcular el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    // Contenedor y bucle for_each con lambdas
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::cout << "Elementos del vector: ";
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << " ";
    });
    std::cout << std::endl;

    // Uso de punteros inteligentes (std::shared_ptr)
    std::shared_ptr<int> ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por std::shared_ptr: " << *ptr << std::endl;

    // Inferencia de tipo con auto
    auto suma = [ptr](int a) -> int {
        return *ptr + a;
    };
    std::cout << "Resultado de suma con std::shared_ptr (10 + 15): " << suma(15) << std::endl;
}

