#include <iostream> 

using namespace std; 

int main () {
    int e, d;
    cin >> e >> d;

    int resultado = 0;
    if (e > d) {
        resultado = e+d;
    } else {
        resultado = 2*(d-e);
    }

    cout << resultado << endl;
}