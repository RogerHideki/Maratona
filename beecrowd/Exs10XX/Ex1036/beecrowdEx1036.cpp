#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, delta, raiz;

    cin >> a >> b >> c;

    if (a == 0) cout << "Impossivel calcular" << endl;
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) cout << "Impossivel calcular" << endl;
        else {
            raiz = sqrt(delta);
            printf("R1 = %.5f\n", (-b + raiz) / (2 * a));
            printf("R2 = %.5f\n", (-b - raiz) / (2 * a));
        }
    }

    return 0;
}