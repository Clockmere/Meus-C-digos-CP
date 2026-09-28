#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std; 

int main () {
    int n, k;
    cin >> n >> k;
    
    vector<int> notas;
    int menor_numero_valido = 0;

    for(int i = 0; i < n; i++) {
        int a_notas;
        cin >> a_notas;
        notas.push_back(a_notas);

    }

    sort(notas.begin(), notas.end(), greater<int>());
    menor_numero_valido = notas[k-1];

    cout << menor_numero_valido << endl;
}