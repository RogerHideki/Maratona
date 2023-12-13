#include <iostream>

using namespace std;

int main() {
    int c, n;

    cin >> c;
    while (c--) {
        cin >> n;
        cout << ((n & 1) == 0 ? 0 : 1) << endl;
    }

    return 0;
}