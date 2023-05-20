#include <iostream>

using namespace std;

int main() {
    int hInicial, hFinal, duracao;

    cin >> hInicial >> hFinal;

    duracao = hFinal - hInicial;
    if (duracao <= 0) duracao += 24;

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

    return 0;
}