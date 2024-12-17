//
// Created by Roberto C on 17/12/24.
//

// main.cpp

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    // Utilizando un iterador para recorrer el vector
    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}

