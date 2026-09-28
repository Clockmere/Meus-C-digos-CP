#include <iostream> 

using namespace std; 

int main () {
    int pressao_desejada, pressao_lida;

    cin >> pressao_desejada >> pressao_lida;

    int diferenca = pressao_desejada - pressao_lida;

    cout << diferenca << endl;
}