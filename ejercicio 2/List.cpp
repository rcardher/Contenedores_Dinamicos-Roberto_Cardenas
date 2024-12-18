//
// Created by Roberto C on 17/12/24.
//

#include "List.h"
#include <stack>

// Implementación de la función para crear una pila desde una lista
std::stack<float, std::list<float>> crearPilaDesdeLista(const std::list<float>& lista) {
    // La pila se construye usando la lista como el contenedor subyacente
    std::stack<float, std::list<float>> pila;

    // Agregar elementos a la pila desde la lista (en orden)
    for (const auto& elem : lista) {
        pila.push(elem);
    }

    return pila;
}


