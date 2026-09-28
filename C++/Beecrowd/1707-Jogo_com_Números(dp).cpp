#include <algorithm>
#include <iostream> 

using ll = long long;

using namespace std;

ll calculo (ll i) {
    ll soma = 0;

    ll digitos = 0;
    ll digito = i;

    while (digito > 0) {
        digitos += digito % 10;
        digito /= 10;
    }

    soma += digitos;
    return soma;
}

int main() {
    ll x, y;
    while (cin >> x >> y) {
        ll soma = 0;
        
        ll minimo = min(x,y);
        ll maximo = max(x,y);

        if (minimo % 2 != 0) {
            for (ll i = minimo; i <= maximo; i+=2) {
                soma += calculo(i);
            }
        } else {
            for (ll i = minimo+1; i <= maximo; i+=2) {
                soma += calculo(i);
            }
        }

        cout << soma << endl;
    }
}