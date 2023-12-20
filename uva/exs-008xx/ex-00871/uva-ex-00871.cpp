#include <iostream>
#include <vector>

using namespace std;

vector<string> grid;
int m, n;
vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

int floodfill(int ux, int uy) {
    grid[ux][uy] = '.';
    int ans = 1;
    for (int i = 0; i < 8; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx >= 0 && vx < m && vy >= 0 && vy < n && grid[vx][vy] == '1') ans += floodfill(vx, vy);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s;
    cin >> t;
    getline(cin, s);
    getline(cin, s);
    while (t--) {
        grid.clear();
        while (getline(cin, s) && !s.empty()) grid.emplace_back(s);
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        for (int ux = 0; ux < m; ux++) {
            for (int uy = 0; uy < n; uy++) {
                if (grid[ux][uy] == '1') ans = max(ans, floodfill(ux, uy));
            }
        }
        cout << ans << '\n';
        if (t) cout << '\n';
    }
    return 0;
}