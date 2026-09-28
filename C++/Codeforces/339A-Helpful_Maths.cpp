#include <algorithm>
#include <cctype>
#include <iostream> 
#include <vector>

using namespace std; 

int main () {
    string s;
    cin >> s;

    vector<char> sum_correct;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            sum_correct.push_back(s[i]);
        }
    }

    sort(sum_correct.begin(), sum_correct.end());

    for (int j = 0; j < sum_correct.size() - 1; j++) {
        cout << sum_correct[j] << '+';
    }

    cout << sum_correct[sum_correct.size() - 1] << endl;
    return 0;
}