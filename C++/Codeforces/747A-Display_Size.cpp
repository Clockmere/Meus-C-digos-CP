#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1;
    int b = n;

    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            a = i;
            b = n/i;
            break;
        }
    }

    cout << a << " " << b << endl;
}