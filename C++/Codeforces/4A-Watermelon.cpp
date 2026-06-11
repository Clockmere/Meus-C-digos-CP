#include <iostream>

int main () {
    for (int i = 0; i <= 1000000000; i++) {
        int weight;
        weight = i;

        if (weight > 2) {
            if (weight % 2 == 0) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}