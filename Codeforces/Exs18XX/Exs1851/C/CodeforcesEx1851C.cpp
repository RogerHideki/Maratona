#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        int c, inicio, fim;
        string ans = "NO";
        cin >> n >> k;
        vector<int> tiles(n);
        vector<int> repeticoes(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> c;
            c--;
            tiles[i] = c;
            repeticoes[c]++;
            if (i == 0) inicio = c;
            if (i == n - 1) fim = c;
        }
        if (inicio == fim) {
            if (repeticoes[inicio] >= k) ans = "YES";
        } else if (repeticoes[inicio] >= k && repeticoes[fim] >= k) {
            int k1 = k;
            int k2 = k;
            for (int i = 0; i < n; i++) {
                if (k1 > 0) {
                    if (tiles[i] == inicio) k1--;
                } else if (k2 > 0) {
                    if (tiles[i] == fim) k2--;
                    if (k2 == 0) {
                        ans = "YES";
                        break;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}