#include <cstdio>
#include <iostream>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    const double pi = 3.14159;

    double triangulo = (a*c)/2;
    double circulo = pi*(c*c);
    double trapezio = ((a+b)*c)/2;
    double quadrado = b*b;
    double retangulo = a*b;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}