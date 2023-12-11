#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, n, m, k, h, altura;
    cin >> t;
    while (t--) {
        int ans = 0;
        cin >> n >> m >> k >> h;
        for (int i = 0; i < n; i++) {
            cin >> altura;
            int diferenca = abs(h - altura);
            if (diferenca != 0 && diferenca % k == 0 && diferenca / k <= m - 1) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}