#include <iostream> 
#include <string>

using namespace std; 

int main () {
    string texto;
    while (getline(cin, texto)) {
        int num_underlines = 0;
        int num_asteriscos = 0;

        for (int i = 0; i < texto.size(); i++) {
            if (texto[i] == '_') {
                num_underlines++;
                // mudando _ para <i> ou </i>
                if (num_underlines % 2 == 0) {
                    // </i>
                    texto.replace(i, 1, "</i>");
                    i += 3;
                } else {
                    // <i>
                    texto.replace(i, 1, "<i>");
                    i += 2;
                }
            } else if (texto[i] == '*') {
                num_asteriscos++;
                // mudando _ para <b> ou </b>
                if (num_asteriscos % 2 == 0) {
                    // </b>
                    texto.replace(i, 1, "</b>");
                    i += 3;
                } else {
                    // <b>
                    texto.replace(i, 1, "<b>");
                    i += 2;
                }
            }
        }

        cout << texto << endl;
    }

    return 0;
}