#include <cstdlib>
#include <iostream> 

using namespace std; 

int main () {
    int diff;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            cin >> num;

            if (num == 1) {
                diff = abs(2-i)+abs(2-j);
            }
        }
    }

    cout << diff << endl;
}