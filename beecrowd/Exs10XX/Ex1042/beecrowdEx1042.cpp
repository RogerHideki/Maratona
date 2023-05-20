#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> desordenado(3), ordenado(3);

    for (int i = 0; i < 3; i++) {
        cin >> desordenado[i];
        ordenado[i] = desordenado[i];
    }

    sort(ordenado.begin(), ordenado.end());

    for (int i = 0; i < 3; i++) cout << ordenado[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++) cout << desordenado[i] << endl;

    return 0;
}