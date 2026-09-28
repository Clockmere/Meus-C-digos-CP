/* Se digitar numero positivo: diz se é par ou ímpar
   Se for negativo: para */
#include <iostream>

int main() {
    int num;
    std::cin >> num;

    /* while avalia num < 0, if else avalia se é par ou ímpar */
    while(num > 0) {
        if (num % 2 == 0) {
            std::cout << "PAR" << "\n";
        } else {
            std::cout << "ÍMPAR" << "\n";
        }

        std::cin >> num;
    }

    return 0;
}