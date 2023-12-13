#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q, consulta;

    while (cin >> n >> q) {
        vector<int> notas(n);

        for (int i = 0; i < n; i++) cin >> notas[i];

        sort(notas.begin(), notas.end(), greater<int>());

        while (q--) {
            cin >> consulta;
            cout << notas[consulta - 1] << endl;
        }
    }

    return 0;
}