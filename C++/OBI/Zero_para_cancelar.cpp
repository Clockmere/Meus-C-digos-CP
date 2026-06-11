#include <iostream> 
#include <numeric>
#include <vector>

using namespace std; 

int main () {
    int qnt_nums;
    cin >> qnt_nums;

    vector<int> nums;

    for (int i = 0; i < qnt_nums; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            nums.pop_back();
        } else {
            nums.push_back(num);
        }
    }

    int total = accumulate(nums.begin(), nums.end(), 0);
    cout << total << endl;
}