#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    double salario, reajuste;
    int percentual;

    cin >> salario;
    if (salario <= 400) percentual = 15;
    else if (salario <= 800) percentual = 12;
    else if (salario <= 1200) percentual = 10;
    else if (salario <= 2000) percentual = 7;
    else percentual = 4;

    reajuste = salario * percentual / 100;
    salario += reajuste;

    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}