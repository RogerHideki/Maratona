#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        vector<int> idades(n);
        for (int i = 0; i < n; i++) cin >> idades[i];
        sort(idades.begin(), idades.end());

        int nSomas = n / 2, letalidade = 0;
        for (int i = 0; i < nSomas; i++) letalidade += idades[n - 1 - i] - idades[i];
        cout << letalidade << "\n";
    }

    return 0;
}