#include <iostream>

using namespace std;

int main() {
    int n, a, l, p;

    cin >> n >> a >> l >> p;
    cout << (n <= a && n <= l && n <= p ? 'S' : 'N') << endl;

    return 0;
}