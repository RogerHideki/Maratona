#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m, n;
vector<string> grid;
char land, water;
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

int floodfill(int ux, int uy) {
    int ans = 1;
    grid[ux][uy] = water;
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = (n + uy + dy[i]) % n;
        if (vx >= 0 && vx < m && grid[vx][vy] == land) ans += floodfill(vx, vy);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    while (cin >> m >> n) {
        grid.assign(m, "");
        for (int i = 0; i < m; i++) cin >> grid[i];
        cin >> x >> y;
        land = grid[x][y];
        water = (land != 'w') ? 'w' : '.';
        floodfill(x, y);
        int ans = 0;
        for (int ux = 0; ux < m; ux++) {
            for (int uy = 0; uy < n; uy++) {
                if (grid[ux][uy] == land) ans = max(ans, floodfill(ux, uy));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}