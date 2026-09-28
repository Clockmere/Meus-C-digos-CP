#include <algorithm>
#include <iostream> 
#include <iterator>
#include <set>
#include <vector>

using namespace std; 

int main () {
    string username;
    cin >> username;

    vector<char> past_chars;

    for(int i = 0; i < size(username); i++) {
        if (find(past_chars.begin(), past_chars.end(), username[i]) == past_chars.end()) {
            past_chars.push_back(username[i]);
        }
    }
    
    int num_letters = size(past_chars);

    if (num_letters % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}