#include <cctype>
#include <iostream> 
#include <algorithm>
#include <iterator>

using namespace std; 

int main () {
    int num_textos;
    cin >> num_textos;
    cin.ignore();

    for (int i = 0; i < num_textos; i++) {
        string texto;
        getline(cin, texto);

        for (int j = 0; j < size(texto); j++) {
            if (isalpha(texto[j])) {
                texto[j] += 3;
            }
        }

        reverse(texto.begin(), texto.end());

        for (int k = texto.size() / 2; k < (int)texto.size(); k++) {
            texto[k] -= 1;
        }

        cout << texto << endl;
    }

    return 0;
}