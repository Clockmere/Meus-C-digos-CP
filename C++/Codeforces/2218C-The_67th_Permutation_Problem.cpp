#include <iostream> 
#include <vector>

using namespace std; 

int main () {
    int n;
    cin >> n;

    vector<vector<int>> all_values;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        vector<int> values;

        for (int j = 1; j <= x; j++) {
            values.push_back(j);
            values.push_back(x+(2*j-1));
            values.push_back(x+(2*j));
        }

        all_values.push_back(values);
    }

    for (int k = 0; k < all_values.size(); k++) {
        for (int l = 0; l < all_values[k].size(); l++) {
            cout << all_values[k][l] << " ";
        }

        cout << endl;
    }
    
}
