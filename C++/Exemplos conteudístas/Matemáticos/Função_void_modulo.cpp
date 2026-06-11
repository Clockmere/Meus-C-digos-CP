#include <iostream> 

/* void não retorna nada, porém executa as operações */
void modulo(int num1, int num2) { 
    std::cout << num1 % num2 << "\n"; 
} 

int main () { 
    int a, b; 
    
    std::cin >> a; 
    std::cin >> b; 
    
    /* chama a função */
    modulo(a, b); 
    
    return 0; 
}