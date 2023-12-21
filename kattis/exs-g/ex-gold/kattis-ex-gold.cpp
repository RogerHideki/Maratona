#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> grid;
int ans = 0;
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

void floodfill(int ux, int uy) {
    if (grid[ux][uy] == 'G') ans++;
    grid[ux][uy] = '#';
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (grid[vx][vy] == 'T') return;
    }
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (grid[vx][vy] != '#') floodfill(vx, vy);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w, h;
    cin >> w >> h;
    grid.assign(h, vector<char>(w));
    int ux, uy;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
            if (grid[i][j] != 'P') continue;
            ux = i;
            uy = j;
        }
    }
    floodfill(ux, uy);
    cout << ans << '\n';
    return 0;
}