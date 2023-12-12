#include <iostream>

using namespace std;

int mdc(int a, int b) {
    return (b == 0 ? a : mdc(b, a % b));
}

int mmc(int a, int b) {
    return a * b / mdc(a, b);
}

int main() {
    int m;

    while (cin >> m) {
        int l1, l2, l3;

        cin >> l1 >> l2 >> l3;
        cout << mmc(mmc(l1, l2), l3) - m << endl;
    }

    return 0;
}