#include <iostream>

using namespace std;

int main() {
    int c, n, m;

    cin >> c;
    while (c--) {
        int acc = 0;
        cin >> n >> m;
        while (n > 0) {
            n -= m;
            acc++;
        }
        cout << acc << endl;
    }

    return 0;
}