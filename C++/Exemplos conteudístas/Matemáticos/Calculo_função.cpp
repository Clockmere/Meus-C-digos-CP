#include <iostream> 

/* Função retorna float, toma como parametro a, b e c */
float calcula (float a, float b, int c) { 
    return a * b + c ; 
} 

int main () { 
    float a, b; 
    int c; 
    
    std::cin >> a; 
    std::cin >> b; 
    std::cin >> c; 
    
    /* chama a função e printa o valor retornado */
    std::cout << calcula(a, b, c) << "\n"; 
    
    return 0; 
}