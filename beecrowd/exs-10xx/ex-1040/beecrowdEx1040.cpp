#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    double n, media = 0;
    vector<int> pesos = {2, 3, 4, 1};

    for (int i = 0; i < 4; i++) {
        cin >> n;
        media += n * pesos[i];
    }
    media /= 10;

    printf("Media: %.1f\n", media);
    if (media >= 7) cout << "Aluno aprovado." << endl;
    else if (media >= 5) {
        cout << "Aluno em exame." << endl;

        cin >> n;
        printf("Nota do exame: %.1f\n", n);

        media = (media + n) / 2;
        if (media >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;

        printf("Media final: %.1f\n", media);
    } else cout << "Aluno reprovado." << endl;

    return 0;
}