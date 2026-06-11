#include <iostream>

int main() {
    double raio;
    const double pi = 3.14159;

    std::cin >> raio;

    printf("A=%.4f\n", pi*(raio*raio));

    return 0;
}