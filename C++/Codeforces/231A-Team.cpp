#include <iostream>

int main () {
    int num_problems;
    std::cin >> num_problems;

    int implement = 0;
    
    for (int i = 0; i <= num_problems-1; i++) {
        int sures = 0;

        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        sures = petya + vasya + tonya;

        if (sures >= 2) {
            implement++;
        }
    }

    std::cout << implement << std::endl;
    return 0;
}