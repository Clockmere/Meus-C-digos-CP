#include <iostream>

int main() {
    double raio;
    std::cin >> raio;

    double volume = (4.0/3)*3.14159*(raio*raio*raio);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}