#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

int main () {
    string s;
    getline(cin, s);

    std::unordered_map<char, string> morse = {
        {'A', ".-"}, {'B', "-..."}, {'C',"-.-."},
        {'D',"-.."}, {'E',"."}, {'F',"..-."},
        {'G',"--."}, {'H',"...."}, {'I',".."},
        {'J',".---"}, {'K',"-.-"}, {'L',".-.."},
        {'M',"--"}, {'N',"-."}, {'O',"---"},
        {'P',".--."}, {'Q',"--.-"}, {'R',".-."},
        {'S',"..."}, {'T',"-"}, {'U',"..-"},
        {'V',"...-"}, {'W',".--"}, {'X',"-..-"},
        {'Y',"-.--"}, {'Z',"--.."}
    };

    for (int i = 0; i < s.length(); i++) {
        if (i > 0) cout << " ";
        
        if (morse.count(s[i])) {
            cout << morse[s[i]];
        } else {
            cout << s[i];
        }
    }

    cout << endl;
}