#include <iostream>

using namespace std;

int mdc(int a, int b) {
    return (b == 0 ? a : mdc(b, a % b));
}

int main() {
    int n;

    cin >> n;
    while (n--) {
        int f1, f2;

        cin >> f1 >> f2;
        cout << mdc(f1, f2) << endl;
    }

    return 0;
}