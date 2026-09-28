#include <cmath>
#include <iostream>
#include <ostream>

int main () {
    double n, m, a;
    std::cin >> n >> m >> a;

    long long num = std::ceil((n/a)) * ceil((m/a));

    std::cout << num << std::endl;
}