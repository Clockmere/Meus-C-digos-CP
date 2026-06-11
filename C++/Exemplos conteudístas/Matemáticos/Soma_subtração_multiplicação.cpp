/* Importa a biblioteca "iostream" para operações de I/O */
#include <iostream> 

int main() { 
    /* Cria as variáveis inteiras n1 e n2 */
    int n1, n2; 

    /* recebe os valores */
    std::cin >> n1; 
    std::cin >> n2; 

    /* Calcula as operações e printa */
    std::cout << n1 + n2 << "\n"; 
    std::cout << n1 - n2 << "\n"; 
    std::cout << n1 * n2 << "\n"; 
    
    return 0; 
}