#include <iostream> 

int main() { 
    int n1, n2; 
    
    std::cin >> n1; 
    std::cin >> n2; 
    
    /* Divisão entre inteiros --> resultado truncado
       Ex.: 3.845 --> 3 */
    std::cout << n1 / n2 << "\n"; 
    /* % --> módulo, resto da divisão inteira */
    std::cout << n1 % n2 << "\n"; 
    
    float a; 
    int b; 
    
    std::cin >> a; 
    std::cin >> b; 
    
    /* Divisão envolvendo float --> resultado decimal (não trunca) */
    std::cout << a / b << "\n"; 
    
    return 0; 
}