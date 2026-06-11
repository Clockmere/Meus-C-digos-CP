#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    /* Criando o vetor do jeito certo */
    std::vector<int> vetor(N);

    int contador = 0;
    for(int i = 0; i < N; i++) {
        std::cin >> vetor[i];

        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }

    std::cout << "Qnt. de pares: " << contador << "\n";
}