#include <cctype>
#include <iostream> 

using namespace std; 

int main () {
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        string yesses;
        cin >> yesses;

        
        if (tolower(yesses[0]) == 'y' 
        && tolower(yesses[1]) == 'e'
        && tolower(yesses[2]) == 's') {
            cout << "YES";
        } else {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}