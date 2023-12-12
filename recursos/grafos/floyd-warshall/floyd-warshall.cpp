#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void floyd(vector<vector<int>> &dist) {
    int n = dist.size();
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main() {
    int n, m, x, y, peso;
    cin >> n >> m;
    vector<vector<int>> dist(n, vector<int>(n, 1e9));
    for (int i = 0; i < n; i++) dist[i][i] = 0;
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> peso;
        dist[x][y] = peso;
    }
    floyd(dist);
    return 0;
}