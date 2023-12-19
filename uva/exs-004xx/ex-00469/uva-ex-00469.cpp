#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> grid, gridAux;
int m, n;
vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

int floodfill(int ux, int uy) {
    gridAux[ux][uy] = '.';
    int ans = 1;
    for (int i = 0; i < 8; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx < 0 || vx >= m || vy < 0 || vy >= n || gridAux[vx][vy] != 'W') continue;
        ans += floodfill(vx, vy);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ux, uy;
    string s;
    cin >> t;
    while (t--) {
        grid.clear();
        while (cin >> s && (s[0] == 'L' || s[0] == 'W')) grid.push_back(s);
        cin >> uy;
        m = grid.size();
        n = grid[0].size();
        gridAux = grid;
        cout << floodfill(stoi(s) - 1, uy - 1) << '\n';
        getline(cin, s);
        while (getline(cin, s) && !s.empty()) {
            stringstream ss(s);
            ss >> ux >> uy;
            gridAux = grid;
            cout << floodfill(ux - 1, uy - 1) << '\n';
        }
        if (t) cout << '\n';
    }
    return 0;
}