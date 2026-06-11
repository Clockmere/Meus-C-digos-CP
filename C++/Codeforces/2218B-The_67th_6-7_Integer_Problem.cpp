#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <cmath>

using namespace std;

int main () {
    int tests;
    cin >> tests;

    vector<int> results (tests);

    for (int i = 0; i < tests; i++) {
        int num1, num2, num3, num4, num5, num6, num7;
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

        int max_num = max({num1, num2, num3, num4, num5, num6, num7});
        results[i] = ((num1+num2+num3+num4+num5+num6+num7)*-1) + (max_num*2);
    }

    for (int k = 0; k < size(results); k++) {
        cout << results[k] << endl;
    }
}