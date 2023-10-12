#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        long long int ans = 0;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
            }
        }
        m = n / 2;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                vector<char> letras = {v[i][j], v[j][n - 1 - i], v[n - 1 - i][n - 1 - j], v[n - 1 - j][i],};
                char maior = *max_element(letras.begin(), letras.end());
                ans += (maior - v[i][j]) + (maior - v[j][n - 1 - i]) + (maior - v[n - 1 - i][n - 1 - j]) +
                       (maior - v[n - 1 - j][i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
