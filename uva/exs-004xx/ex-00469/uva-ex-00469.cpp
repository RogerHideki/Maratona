#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<int>> grid;
int m, n, color;
vector<int> colors;
vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

void floodfill(int ux, int uy) {
    grid[ux][uy] = color;
    colors[color]++;
    for (int i = 0; i < 8; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx >= 0 && vx < m && vy >= 0 && vy < n && grid[vx][vy] == -1) floodfill(vx, vy);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ux, uy;
    string s;
    cin >> t;
    while (t--) {
        grid.clear();
        while (cin >> s && (s[0] == 'L' || s[0] == 'W')) {
            n = s.size();
            vector<int> vr(n);
            for (int i = 0; i < n; i++) vr[i] = (s[i] == 'L') ? -2 : -1;
            grid.emplace_back(vr);
        }
        cin >> uy;
        m = grid.size();
        colors.assign(1, 0);
        color = 0;
        floodfill(stoi(s) - 1, uy - 1);
        cout << colors[color] << '\n';
        getline(cin, s);
        while (getline(cin, s) && !s.empty()) {
            stringstream ss(s);
            ss >> ux >> uy;
            ux--;
            uy--;
            if (grid[ux][uy] == -1) {
                colors.emplace_back(0);
                color++;
                floodfill(ux, uy);
            }
            cout << colors[grid[ux][uy]] << '\n';
        }
        if (t) cout << '\n';
    }
    return 0;
}