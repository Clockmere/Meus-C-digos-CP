/* Printa do 0 até 100, apenas os pares */
#include <iostream>

int main() {
    int i = 0;

    /* repete até 100 (pois i é incrementado de 1 em 1 
       e ele depende do i para argumento de repetição)*/
    while (i <= 100) {
        if (i % 2 == 0) {
            std::cout << i << "\n";
        }
        
        i++;
    }

    return 0;
}