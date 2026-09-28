#include <iostream> 

using namespace std; 

int main () {
    int cost, money, qnt;
    cin >> cost >> money >> qnt;

    int total_cost = 0;
    for (int i = 1; i <= qnt; i++) {
        total_cost += cost*i;
    }

    if (total_cost > money) {
        int borrow = total_cost - money;
        cout << borrow;
    } else {
        cout << 0;
    }

    cout << endl;
    return 0;
}