//
// Created by Roberto C on 17/12/24.
//


#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>

// Ejercicio 1: Vector e Iteradores
void ejercicio1() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    // Recorremos e imprimimos usando un iterador
    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

// Ejercicio 2: Contenedores Estándar y Secuencias
void ejercicio2() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    // Mostrar y sacar elementos de la pila
    while(!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}

// Ejercicio 3: Algoritmos
void ejercicio3() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    // Mostrar los números ordenados
    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    // Encontrar el número máximo
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;
}

// Ejercicio 4: Cálculo numérico
void ejercicio4() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Suma: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    // Realizar una operación de suma sobre los valores
    valores += 5.0;
    std::cout << "Valores + 5.0: ";
    for(double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}

// Ejercicio 5: C++ Moderno
void ejercicio5() {
    // Expresión lambda para calcular el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    // Utilización de un bucle for_each con lambda
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << std::endl;
    });

    // Uso de punteros inteligentes
    std::shared_ptr<int> ptr(new int(10));
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;
}

int main() {
    // Ejercicio 1
    std::cout << "Ejercicio 1: Vector e Iteradores" << std::endl;
    ejercicio1();

    // Ejercicio 2
    std::cout << "\nEjercicio 2: Contenedores Estándar y Secuencias" << std::endl;
    ejercicio2();

    // Ejercicio 3
    std::cout << "\nEjercicio 3: Algoritmos" << std::endl;
    ejercicio3();

    // Ejercicio 4
    std::cout << "\nEjercicio 4: Cálculo numérico" << std::endl;
    ejercicio4();

    // Ejercicio 5
    std::cout << "\nEjercicio 5: C++ Moderno" << std::endl;
    ejercicio5();

    return 0;
}










