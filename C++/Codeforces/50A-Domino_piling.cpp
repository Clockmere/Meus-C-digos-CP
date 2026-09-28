#include <iostream> 

using namespace std; 

int main () {
    int size_x, size_y;
    cin >> size_x >> size_y;

    int area = size_x*size_y;
    int pieces = area/2;

    cout << pieces << endl;
}