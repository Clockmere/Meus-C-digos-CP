#include <iostream> 

using namespace std; 

int main () {
    int testcases;
    cin >> testcases;

    string correct = "codeforces";

    for (int i = 0; i < testcases; i++) {
        string word;
        cin >> word;

        int differs = 0;

        for (int j = 0; j < word.size(); j++) {
            if (word[j] != correct[j]) {
                differs++;
            }
        }
        
        cout << differs << endl;
    }

    return 0;
}