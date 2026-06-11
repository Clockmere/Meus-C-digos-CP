#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main () {
    string problem;
    getline(cin, problem);

    stringstream ss(problem);
    int a, b, c;
    char lixo;

    ss >> a >> lixo >> b >> lixo >> c;

    if (a + b == c) {
        cout << "+\n";
    } else if (a - b == c) {
        cout << "-\n";
    } else if ((double)a / (double)b == c) {
        cout << "/\n";
    } else if (a * b == c) {
        cout << "*\n";
    }
}