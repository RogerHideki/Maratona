#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m;
    cin >> t;
    vector<int> di = {-1, 0, 1, 0};
    vector<int> dj = {0, 1, 0, -1};
    while (t--) {
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        for (int ui = 0; ui < n; ui++) {
            for (int uj = 0; uj < m; uj++) {
                int maxNeighbor = 1;
                for (int k = 0; k < 4; k++) {
                    int vi = ui + di[k];
                    int vj = uj + dj[k];
                    if ((vi != -1) && (vi != n) && (vj != -1) && (vj != m)) maxNeighbor = max(maxNeighbor, v[vi][vj]);
                }
                v[ui][uj] = min(v[ui][uj], maxNeighbor);
                cout << v[ui][uj];
                if (uj + 1 != m) cout << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}