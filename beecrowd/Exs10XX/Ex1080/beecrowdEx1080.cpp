#include <iostream>

using namespace std;

int main() {
    int n, maior, idxMaior;

    for (int i = 1; i <= 100; i++) {
        cin >> n;

        if (i == 1 || n > maior) {
            maior = n;
            idxMaior = i;
        }
    }

    cout << maior << endl;
    cout << idxMaior << endl;

    return 0;
}