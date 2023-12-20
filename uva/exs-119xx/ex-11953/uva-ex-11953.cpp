#include <iostream>
#include <vector>

using namespace std;

int n;
vector<string> grid;
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

void floodfill(int ux, int uy) {
    grid[ux][uy] = '.';
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx >= 0 && vx < n && vy >= 0 && vy < n && grid[vx][vy] != '.') floodfill(vx, vy);
    }
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        grid.assign(n, "");
        for (int j = 0; j < n; j++) cin >> grid[j];
        int ans = 0;
        for (int ux = 0; ux < n; ux++) {
            for (int uy = 0; uy < n; uy++) {
                if (grid[ux][uy] != 'x') continue;
                ans++;
                floodfill(ux, uy);
            }
        }
        cout << "Case " << i << ": " << ans << '\n';
    }
    return 0;
}