#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for(int i = 1; i <= N; i++) {
        int divisores = 0;

        for(int j = 1; j <= i /* limite (Ex.: 16/15 --> nunca vai sobrar 0 - sobra menos)*/; j++){
            if (i % j == 0) {
                divisores++;
            }
        }

        std::cout << i << " tem " << divisores << " divisores" << "\n";
    }

    return 0;
}