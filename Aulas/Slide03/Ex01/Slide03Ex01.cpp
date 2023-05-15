#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m; /* Número de vértices / número de arestas */
    int x, y;

    cin >> n >> m;

    vector<vector<int>> grafo(n, vector<int> (n, 0));

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--, y--;

        grafo[x][y];
        grafo[y][x];
    }

    return 0;
}