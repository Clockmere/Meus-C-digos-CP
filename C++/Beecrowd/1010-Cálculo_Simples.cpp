#include <cstdio>
#include <iostream>

int main() {
    int _, qnt1, qnt2;
    double preco1, preco2;
    std::cin >> _ >> qnt1 >> preco1;
    std::cin >> _ >> qnt2 >> preco2;

    double total = (preco1*qnt1)+(preco2*qnt2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}