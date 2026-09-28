/* Diz se o número é par, ímpar, neutro, positivo ou negativo */
#include <iostream>

bool par(int num) {
    return num % 2 == 0;
}

bool positivo(int num) {
    return num > 0;
}

int main() {
    int numero;
    std::cin >> numero;

    /* 0 é par */

    if (par(numero)) {
        std::cout << "PAR ";
    } else {
        std::cout << "ÍMPAR ";
    }

    if (numero == 0) {
        std::cout << "NEUTRO\n";
    } else if (positivo(numero)) {
        std::cout << "POSITIVO\n";
    } else {
        std::cout << "NEGATIVO\n";
    }

    return 0;
}