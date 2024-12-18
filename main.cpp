//
// Created by Roberto C on 17/12/24.
//
// main.cpp

// main.cpp

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>
#include <boost/lexical_cast.hpp>
#include "ejercicio 2/List.h"
#include "ejercicio 3/Algoritmos.h"
#include "ejercicio 4/operaciones.h"

// Declaración de funciones
void ejercicio1();
void ejercicio2();

int main() {
    // Ejecutar los ejercicios
    ejercicio1();
    ejercicio2();
    ejecutarEjercicio3();
    ejecutarEjercicio4();

    return 0;
}

// Ejercicio 1: Vector e Iteradores
void ejercicio1() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    std::cout << "Ejercicio 1: Vector e Iteradores\n";
    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

// Ejercicio 2: Contenedores Estándar y Secuencias (Stack desde List)
void ejercicio2() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::stack<float, std::list<float>> pila = crearPilaDesdeLista(lista);

    std::cout << "\nEjercicio 2: Stack desde List\n";
    while (!pila.empty()) {
        std::cout << "Elemento en la cima de la pila: " << pila.top() << std::endl;
        pila.pop();
    }
}







