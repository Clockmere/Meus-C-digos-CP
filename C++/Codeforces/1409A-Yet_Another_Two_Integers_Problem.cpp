#include <iostream> 

using namespace std; 

int main () {
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        int diff = n1 > n2 ? n1 - n2 : n2 - n1;
        int moves = 0;

        moves += (diff/10);

        if (diff % 10 != 0) {
            moves++;
        }

        cout << moves << endl;
    }

    return 0;
}