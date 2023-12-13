#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, horas;
    double valor;

    cin >> n >> horas >> valor;
    cout << "NUMBER = " << n << endl;
    printf("SALARY = U$ %.2f\n", horas * valor);

    return 0;
}