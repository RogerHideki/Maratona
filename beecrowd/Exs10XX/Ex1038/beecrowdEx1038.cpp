#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    vector<double> cardapio = {4, 4.5, 5, 2, 1.5};
    int item, quantidade;

    cin >> item >> quantidade;
    printf("Total: R$ %.2f\n", cardapio[item - 1] * quantidade);

    return 0;
}