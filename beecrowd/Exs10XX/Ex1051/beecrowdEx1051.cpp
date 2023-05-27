#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double salario;

    cin >> salario;

    if (salario <= 2000) cout << "Isento";
    else if (salario > 2000 && salario <= 3000) printf("R$ %.2f", (salario - 2000) * 0.08);
    else if (salario > 3000 && salario <= 4500) printf("R$ %.2f", 80 + (salario - 3000) * 0.18);
    else if (salario > 4500) printf("R$ %.2f", 350 + (salario - 4500) * 0.28);
    cout << endl;

    return 0;
}