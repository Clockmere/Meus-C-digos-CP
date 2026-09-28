#include <iostream>

int main() {
    double a, b;
    std::cin >> a;
    std::cin >> b;

    float media = ((a*3.5)+(b*7.5))/11;

    printf("MEDIA = %.5f\n", media);

    return 0;
}