#include <cstdio>
#include <iostream>

int main () {
    int tempo, vel;
    std::cin >> tempo >> vel;

    // (double) --> torna uma divisão de int um resultado float se existir
    double litros = (double) tempo*vel/12;

    printf("%.3f\n", litros);
    return 0;
}