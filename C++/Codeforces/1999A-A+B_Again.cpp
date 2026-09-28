#include <iostream> 

using namespace std; 

int main () {
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        string nums;
        cin >> nums;

        int sum = (nums[0] - '0') + (nums[1] - '0');

        cout << sum << endl;
    }

    return 0;
}