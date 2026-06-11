#include <iostream> 

using namespace std; 

int main () {
    int num_alunos;
    cin >> num_alunos;

    float maior_nota = 0;
    int melhor_aluno;

    for (int i = 0; i < num_alunos; i++) {
        int aluno;
        float nota;
        cin >> aluno >> nota;

        if (nota > maior_nota) {
            maior_nota = nota;
            melhor_aluno = aluno;
        }
    }

    if (maior_nota < 8) {
        cout << "Minimum note not reached" << endl;
    } else {
        cout << melhor_aluno << endl;
    }
}