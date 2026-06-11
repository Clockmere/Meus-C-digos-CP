#include <iostream>
#include <vector>

using namespace std;

int main () {
    int x;
    cin >> x;
    vector<int> values (x);

    for (int i = 0; i < x; i++) {
        int num;
        cin >> num;
        values[i] = num;
    }

    for (int j = 0; j < x; j++) {
        cout << values[j] << endl;
    }
}