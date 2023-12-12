#include <iostream>

using namespace std;

int decimal(string a) {
    int size = a.size();
    int potencia = 1, total = 0;

    for (int i = 1; i <= size; i++) {
        total += ((a[size - i] - 48) * potencia);
        potencia *= 2;
    }
    return total;
}

int mdc(int a, int b) {
    return (b == 0 ? a : mdc(b, a % b));
}

int main() {
    int n, i = 1;

    cin >> n;
    while (n--) {
        string s1, s2;

        cin >> s1 >> s2;
        cout << "Pair #" << i << ": ";
        cout << (mdc(decimal(s1),decimal(s2)) == 1 ? "Love is not all you need!" : "All you need is love!")<< endl;
        i++;
    }

    return 0;
}