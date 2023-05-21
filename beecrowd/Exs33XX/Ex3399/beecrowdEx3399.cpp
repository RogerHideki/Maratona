#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;

    cin >> a >> b >> c >> n;
    cout << a + (n - 1) * (c - b) << endl;

    return 0;
}