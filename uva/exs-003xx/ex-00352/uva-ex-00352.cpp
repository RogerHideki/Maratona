#include <iostream>
#include <vector>

using namespace std;

int m;
vector<string> grid;
vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

void floodfill(int ux, int uy) {
    grid[ux][uy] = '.';
    for (int i = 0; i < 8; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx >= 0 && vx < m && vy >= 0 && vy < m && grid[vx][vy] == '1') floodfill(vx, vy);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (cin >> m) {
        grid.assign(m, "");
        for (int i = 0; i < m; i++) cin >> grid[i];
        int ans = 0;
        for (int ux = 0; ux < m; ux++) {
            for (int uy = 0; uy < m; uy++) {
                if (grid[ux][uy] != '1') continue;
                ans++;
                floodfill(ux, uy);
            }
        }
        cout << "Image number " << t << " contains " << ans << " war eagles.\n";
        t++;
    }
    return 0;
}