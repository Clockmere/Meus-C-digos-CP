#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int dist;
    double combs;
    std::cin >> dist >> combs;

    double consumo = dist/combs;

    printf("%.3f km/l\n", consumo);
}