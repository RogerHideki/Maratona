#include <iostream>

using namespace std;

int main() {
    int p1, c1, p2, c2, output;

    cin >> p1 >> c1 >> p2 >> c2;
    output = p2 * c2 - p1 * c1;
    if (output < 0) cout << -1;
    else if (output == 0) cout << 0;
    else cout << 1;
    cout << endl;

    return 0;
}