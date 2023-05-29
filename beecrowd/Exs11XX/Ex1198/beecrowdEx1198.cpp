#include <iostream>

using namespace std;

int main() {
    long long int soldadosA, soldadosB, output;

    while (cin >> soldadosA >> soldadosB) {
        output = soldadosA - soldadosB;

        if (output < 0) output *= -1;

        cout << output << endl;
    }

    return 0;
}