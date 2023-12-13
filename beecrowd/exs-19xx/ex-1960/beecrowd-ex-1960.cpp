#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> c = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    vector<string> d = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    vector<string> u = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int n, indice;
    string romano;

    cin >> n;

    indice = n / 100;
    if (indice != 0) {
        romano = c[indice - 1];
        n -= (100 * indice);
    }

    indice = n / 10;
    if (indice != 0) {
        romano += d[indice - 1];
        n -= (10 * indice);
    }

    if (n != 0) romano += u[n - 1];

    cout << romano << endl;

    return 0;
}