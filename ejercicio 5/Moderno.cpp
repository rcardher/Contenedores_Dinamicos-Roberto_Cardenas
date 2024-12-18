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
    auto cuadrado = [](int num) { return num * num; }; // Esta lambda toma un número y devuelve su cuadrado
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl; // Llamamos a la lambda con el valor 5

    // Contenedor y bucle for_each con lambdas
    // Aquí usamos un vector de enteros y un bucle for_each para recorrer y mostrar sus elementos
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::cout << "Elementos del vector: ";
    // for_each aplica una lambda a cada elemento del vector
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << " "; // Imprime cada número
    });
    std::cout << std::endl;

    // Uso de punteros inteligentes (std::shared_ptr)
    // Un puntero inteligente ayuda a gestionar la memoria automáticamente
    std::shared_ptr<int> ptr = std::make_shared<int>(10); // Aquí se crea un shared_ptr que apunta a un valor 10
    std::cout << "Valor apuntado por std::shared_ptr: " << *ptr << std::endl; // Mostramos el valor almacenado

    // La palabra auto permite que el compilador deduzca el tipo de una variable
    auto suma = [ptr](int a) -> int {
        return *ptr + a; // La lambda recibe un número y suma el valor al que apunta el shared_ptr
    };
    // Llamamos a la lambda con el valor 15, sumando 10 (el valor apuntado por el shared_ptr) con 15
    std::cout << "Resultado de suma con std::shared_ptr (10 + 15): " << suma(15) << std::endl;
}

