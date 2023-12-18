#include <iostream>
#include <vector>

using namespace std;

int x, y;
vector<vector<int>> grid;
vector<vector<bool>> visiteds;
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
bool flow;
int nCells;

void dfs(int ux, int uy) {
    nCells++;
    visiteds[ux][uy] = true;
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx < 0 || vx >= x || vy < 0 || vy >= y) continue;
        if (grid[vx][vy] < grid[ux][uy]) flow = true;
        else if (grid[vx][vy] == grid[ux][uy] && !visiteds[vx][vy]) dfs(vx, vy);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> y >> x;
    grid.assign(x, vector<int>(y));
    for (int ux = 0; ux < x; ux++) {
        for (int uy = 0; uy < y; uy++) cin >> grid[ux][uy];
    }
    visiteds.assign(x, vector<bool>(y, false));
    int ans = 0;
    for (int ux = 0; ux < x; ux++) {
        for (int uy = 0; uy < y; uy++) {
            if (!visiteds[ux][uy]) {
                flow = false;
                nCells = 0;
                dfs(ux, uy);
                if (!flow) ans += nCells;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}