#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    double n;
    vector<int> divisores = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    vector<double> valores = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    cin >> n;
    int centavos = n * 100;

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 12; i++) {
        if (i == 6) cout << "MOEDAS:" << endl;
        printf("%d %s de R$ %.2f\n", centavos / divisores[i], (i < 6 ? "nota(s)" : "moeda(s)"), valores[i]);
        centavos %= divisores[i];
    }

    return 0;
}