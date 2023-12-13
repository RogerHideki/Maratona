#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n) cout << n / 5 + n / 25 + n / 125 + n / 625 + n / 3125 + n / 15625 + n / 78125 + n / 390625 << endl;

    return 0;
}