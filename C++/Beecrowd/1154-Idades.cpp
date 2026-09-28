#include <cstdio>
#include <iostream>

using namespace std;

int main () {
    int idade = 0;
    int idades = 0, qnt_idades = 0;
    float media = 0;

    while (true) {
        cin >> idade;

        if (idade >= 0) {
            qnt_idades++;
            idades += idade;
        } else {
            break;
        }
    }

    media = float(idades) / qnt_idades;

    printf("%.2f\n", media);
    return 0;
}