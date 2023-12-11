#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    double valor, total = 0;

    while (cin >> n >> n >> valor) total += n * valor;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}