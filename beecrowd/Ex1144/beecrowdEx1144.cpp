#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        int n2 = i * i;
        int n3 = n2 * i;
        cout << i << " " << n2 << " " << n3 << endl;
        cout << i << " " << n2 + 1<< " " << n3 + 1 << endl;
    }

    return 0;
}