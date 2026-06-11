#include <iostream>
#include <vector>

int main () {
    int valor;
    std::cin >> valor;
    std::vector<int> cedulas = {100, 50, 20, 10, 5, 2, 1};

    std::cout << valor << "\n";
    for (int i = 0; i <= cedulas.size()-1; i++) {
        int notas = valor / cedulas[i];
        valor -= notas * cedulas[i];
        std::cout << notas << " nota(s) de R$ " << cedulas[i] << ",00\n";
    }
    return 0;
}