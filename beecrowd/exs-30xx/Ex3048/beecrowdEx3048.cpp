#include <iostream>

using namespace std;

int main() {
    int n, v, lido = 1, marcados = 1;

    cin >> n;
    while (n--) {
        cin >> v;
        if (v != lido) {
            lido = v;
            marcados++;
        }
    }
    cout << marcados << endl;

    return 0;
}