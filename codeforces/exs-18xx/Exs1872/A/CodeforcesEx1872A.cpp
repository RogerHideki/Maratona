#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double a, b, c;
        cin >> a >> b >> c;
        cout << ceil((max(a, b) - ((a + b) / 2)) / c) << '\n';
    }
    return 0;
}