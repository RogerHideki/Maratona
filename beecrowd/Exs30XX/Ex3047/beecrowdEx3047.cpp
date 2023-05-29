#include <iostream>

using namespace std;

int main() {
    int m, a, b, c, maior;

    cin >> m >> a >> b;

    a > b ? maior = a : maior = b;

    c = m - a - b;
    if (c > maior) maior = c;

    cout << maior << endl;

    return 0;
}