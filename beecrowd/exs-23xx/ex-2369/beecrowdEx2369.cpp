#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;

    cin >> n;
    if (n <= 10) cout << 7;
    else if (n <= 30) cout << 7 + n - 10;
    else if (n <= 100) cout << 27 + (n - 30) * 2;
    else cout << 167 + (n - 100) * 5;
    cout << endl;

    return 0;
}