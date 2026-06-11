#include <iostream>

int main() {
    std::string nome;
    double sal, vendas;
    std::cin >> nome >> sal >> vendas;

    double total = sal+(vendas*0.15);

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}