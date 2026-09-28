#include <iostream>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    double media = ((a*2)+(b*3)+(c*5))/10;

    printf("MEDIA = %.1f\n", media);

    return 0;
}