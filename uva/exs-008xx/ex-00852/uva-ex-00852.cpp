#include <iostream>
#include <vector>

using namespace std;

vector<string> grid;
int territoryPoints;
bool isBlack, isWhite;
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

void floodfill(int ux, int uy) {
    territoryPoints++;
    grid[ux][uy] = '-';
    for (int i = 0; i < 4; i++) {
        int vx = ux + dx[i];
        int vy = uy + dy[i];
        if (vx == -1 || vx == 9 || vy == -1 || vy == 9) continue;
        if (grid[vx][vy] == 'X') isBlack = true;
        else if (grid[vx][vy] == 'O') isWhite = true;
        else if (grid[vx][vy] == '.') floodfill(vx, vy);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        grid.assign(9, "");
        for (int i = 0; i < 9; i++) cin >> grid[i];
        int blackPoints = 0;
        int whitePoints = 0;
        for (int ux = 0; ux < 9; ux++) {
            for (int uy = 0; uy < 9; uy++) {
                if (grid[ux][uy] == 'X') blackPoints++;
                else if (grid[ux][uy] == 'O') whitePoints++;
                else if (grid[ux][uy] == '.') {
                    territoryPoints = 0;
                    isBlack = isWhite = false;
                    floodfill(ux, uy);
                    if (isBlack && !isWhite) blackPoints += territoryPoints;
                    else if (!isBlack && isWhite) whitePoints += territoryPoints;
                }
            }
        }
        cout << "Black " << blackPoints << " White " << whitePoints << '\n';
    }
    return 0;
}