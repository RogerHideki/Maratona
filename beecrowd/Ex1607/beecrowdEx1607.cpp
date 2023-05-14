#include <iostream>

using namespace std;

int main() {
    int t, operacoes;
    string a, b;

    cin >> t;
    while (t--) {
        int output = 0;

        cin >> a >> b;
        int aSize = a.size();
        for (int i = 0; i < aSize; i++) {
            operacoes = b[i] - a[i];
            if (operacoes < 0) operacoes += 26;
            output += operacoes;
        }
        cout << output << endl;
    }

    return 0;
}