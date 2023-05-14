#include <iostream>
#include <vector>

using namespace std;

#define lli long long int

lli mdc(lli n1, lli n2) {
    return (n2 == 0 ? n1 : mdc(n2, n1 % n2));
}

lli mmc(lli n1, lli n2) {
    return n1 * n2 / mdc(n1, n2);
}

int main() {
    int n;
    lli t;

    while (cin >> n >> t && !(n == 0 && t == 0)) {
        vector<int> quiques(t), tempos(n);
        int output = 1;
        lli menor;

        for (int i = 0; i < n; i++) {
            cin >> tempos[i];
            quiques[tempos[i] - 1]++;
            (i != 0 ? menor = mmc(menor, tempos[i]) : menor = tempos[i]);

        }

        for (lli i = 2; i <= t; i++) {
            if (quiques[i - 1] == 0 && mmc(menor, i) == t) {
                output = i;
                break;
            }
            if (i == t / 2) i = t - 1;
        }

        (output == 1 ? cout << "impossivel" : cout << output);
        cout << endl;
    }

    return 0;
}