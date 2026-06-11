#include <iostream>

int main() {
    int N;
    std::cin >> N;

    /* Se for múltiplo de 3 pula, se passar de 50 para */
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) {
            /* pula esse loop */
            continue;
        }

        if (i > 50) {
            /* encerra esse loop */
            break;
        }

        std::cout << i << "\n";
    }

    return 0;
}