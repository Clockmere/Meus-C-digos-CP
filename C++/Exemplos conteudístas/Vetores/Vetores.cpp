#include <iostream>

int main() {
    /* declarando um vetor com 5 variáveis
       (índice vai de 0 à 4) */
    int vetor[5];
    /* Lendo os valores */
    for (int i = 0; i <= 4; i++) {
        std::cin >> vetor[i];
    }

    /* Printando os valores */
    for (int i = 0; i <= 4; i++) {
        std::cout << vetor[i] << "\n";
    }
}