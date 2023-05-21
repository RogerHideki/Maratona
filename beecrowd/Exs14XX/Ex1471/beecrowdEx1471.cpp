#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, r, identificador;

    while (cin >> n) {
        vector<bool> identificadores(n, 0);

        cin >> r;
        for (int i = 0; i < r; i++) {
            cin >> identificador;
            identificadores[identificador - 1] = 1;
        }

        if (n == r) cout << '*' << endl;
        else {
            for (int i = 0; i < n; i++) {
                if (!identificadores[i]) cout << i + 1 << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}