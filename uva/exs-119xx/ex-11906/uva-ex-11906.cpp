#include <iostream>
#include <vector>
#include <set>

#define pii pair<int, int>

using namespace std;

int R, C, numEven, numOdd;
vector<vector<int>> grid;
vector<int> dx, dy;

void dfs(int ux, int uy) {
    grid[ux][uy] = 1;
    set<pii > s;
    int nEdges = 0;
    for (int i = 0; i < 8; i++) {
        pii movement = {dx[i], dy[i]};
        if (s.find(movement) != s.end()) continue;
        s.insert(movement);
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx < 0 || vx >= R || vy < 0 || vy >= C || grid[vx][vy] == -1) continue;
        nEdges++;
        if (!grid[vx][vy]) dfs(vx, vy);
    }
    if (nEdges & 1) numOdd++;
    else numEven++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, M, N, W, x, y;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> R >> C >> M >> N >> W;
        grid.assign(R, vector<int>(C, 0));
        while (W--) {
            cin >> x >> y;
            grid[x][y] = -1;
        }
        numEven = 0;
        numOdd = 0;
        dx = {-M, -M, M, M, -N, -N, N, N};
        dy = {-N, N, -N, N, -M, M, -M, M};
        dfs(0, 0);
        cout << "Case " << i << ": " << numEven << ' ' << numOdd << '\n';
    }
    return 0;
}