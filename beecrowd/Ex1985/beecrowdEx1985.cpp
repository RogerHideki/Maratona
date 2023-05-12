#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int p, produto, q;
    vector<double> cardapio = {1.5, 2.5, 3.5, 4.5, 5.5};
    double valor = 0;

    cin >> p;
    while (p--) {
        cin >> produto >> q;
        valor += (cardapio[produto - 1001] * q);
    }
    printf("%.2f\n", valor);

    return 0;
}