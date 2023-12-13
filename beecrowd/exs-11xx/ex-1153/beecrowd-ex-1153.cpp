#include <iostream>

using namespace std;

int main() {
    int n, fatorial = 1;

    cin >> n;
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }

    cout << fatorial << endl;

    return 0;
}