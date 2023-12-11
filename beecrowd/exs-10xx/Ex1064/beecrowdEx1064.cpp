#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    double n, acumulador = 0;
    int nPositivos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n > 0) {
            acumulador += n;
            nPositivos++;
        }
    }

    cout << nPositivos << " valores positivos" << endl;
    printf("%.1f\n", acumulador / nPositivos);

    return 0;
}