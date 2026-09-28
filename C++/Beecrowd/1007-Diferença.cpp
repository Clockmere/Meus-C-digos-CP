#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int diferenca = (a * b - c * d);

    std::cout << "DIFERENCA = " << diferenca << "\n";

    return 0;
}