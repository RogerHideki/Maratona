#include <iostream>

using namespace std;

int main() {
    double n;
    int positivos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> n;
        if (n > 0) positivos++;
    }

    cout << positivos << " valores positivos" << endl;

    return 0;
}