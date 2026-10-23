#include <iostream> 
#include <algorithm>

using namespace std; 

int main () {
    int num1, num2;
    while (cin >> num1 >> num2) {

        int lower = min(num1, num2);
        int inicio = (lower % 2 == 0)? lower + 1 : lower;

        int upper = max(num1, num2);
        int final = (upper % 2 == 0)? upper - 1 : upper;

        long long soma_total = 0;

        for (int j = inicio; j <= final; j += 2) {
            long long soma = 0;
            long long temp = j;

            while (temp > 0) {
                int digito = temp % 10;
                soma += digito;
                temp /= 10;
            }

            soma_total += soma;
        }

        cout << soma_total << endl;
    }

    return 0;
}