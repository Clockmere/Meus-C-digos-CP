// TS IS ONLY FOR KOTLIN :(((

#include <iostream> 

using namespace std; 

int main () {
    int test_cases;
    cin >> test_cases;

    string output;
    
    for (int i = 0; i < test_cases; i++) {
        int max;
        int a1, b1;
        int a2, b2;

        cin >> max >> a1 >> b1 >> a2 >> b2;

        int a_total = a1 + a2;
        int b_total = b1 + b2;
        
        // if equal
        if (a_total == b_total) {
            output += "YES\n";
        } else {
            // calculate if scores diff. > max. score
            if (abs(a_total - b_total) < max) {
                output += "YES\n";
            } else {
                output += "NO\n";
            }
        }
    }

    cout << output;
    return 0;
}