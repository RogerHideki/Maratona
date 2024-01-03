#include <iostream>
#include <vector>

using namespace std;

int m, n;
vector<string> grid;
vector<string> binaries = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111",
                           "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};
vector<int> colors;
int color;
vector<pair<int, char>> sequence = {{1, 'A'},
                                    {5, 'D'},
                                    {3, 'J'},
                                    {2, 'K'},
                                    {4, 'S'},
                                    {0, 'W'}};

void floodfill(int ux, int uy, char target) {
    grid[ux][uy] = '.';
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx >= 0 && vx < m && vy >= 0 && vy < n) {
            if (grid[vx][vy] == target) floodfill(vx, vy, target);
            else if (grid[vx][vy] == '0') {
                colors[color]--;
                color++;
                colors[color]++;
                floodfill(vx, vy, '0');
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h, w;
    int caseNumber = 1;
    while (cin >> h >> w && h) {
        m = h + 2;
        n = w * 4 + 2;
        grid.assign(m, "0");
        string s(4 * w + 1, '0');
        grid[0] += s;
        grid[h + 1] += s;
        char c;
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                cin >> c;
                if (c <= '9') grid[i] += binaries[c - '0'];
                else grid[i] += binaries[c - 'a' + 10];
            }
            grid[i] += "0";
        }
        floodfill(0, 0, '0');
        colors.assign(6, 0);
        for (int ux = 1; ux < (m - 1); ux++) {
            for (int uy = 1; uy < (n - 1); uy++) {
                if (grid[ux][uy] != '1') continue;
                color = 0;
                colors[color]++;
                floodfill(ux, uy, '1');
            }
        }
        cout << "Case " << caseNumber << ": ";
        caseNumber++;
        for (auto &[idx, letter]: sequence) {
            while (colors[idx]--) cout << letter;
        }
        cout << endl;
    }
    return 0;
}