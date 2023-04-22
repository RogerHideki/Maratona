#include <iostream>

using namespace std;

int main() {
    int turma, alunos;
    cin >> turma >> alunos;

    cout << "Ola pessoal!" << endl;
    cout << "Treinamento para a Maratona da turma " << turma << " " << alunos << endl;

    for (int i = 1; i <= alunos; i++) {
        cout << "Aluno " << i << endl;
    }

    return 0;
}
