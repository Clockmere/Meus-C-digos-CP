#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    double dist = std::sqrt((std::pow(x2-x1, 2))+(std::pow(y2-y1, 2)));

    printf("%.4f\n", dist);
    return 0;
}