#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        int n2 = i * i;
        cout << i << " " << n2 << " " << n2 * i << endl;
    }

    return 0;
}