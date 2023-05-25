#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool decrescente(double a, double b) { return (a > b); }

int main() {
    vector<double> lados(3);

    for (int i = 0; i < 3; i++) cin >> lados[i];

    sort(lados.begin(), lados.end(), decrescente);

    if (lados[0] >= lados[1] + lados[2]) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (lados[0] * lados[0] == lados[1] * lados[1] + lados[2] * lados[2]) cout << "TRIANGULO RETANGULO" << endl;
        else if (lados[0] * lados[0] > lados[1] * lados[1] + lados[2] * lados[2])
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else cout << "TRIANGULO ACUTANGULO" << endl;

        if (lados[0] == lados[1] && lados[1] == lados[2]) cout << "TRIANGULO EQUILATERO" << endl;
        else if (lados[0] == lados[1] || lados[1] == lados[2]) cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}