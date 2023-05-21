#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int u) {
    visitados[u] = 1;
    for (int i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (!visitados[v]) dfs(grafo, visitados, v);
    }
}

int main() {
    int n, m, x, y, familias = 0;

    cin >> n >> m;

    vector<vector<int>> grafo(n);
    vector<bool> visitados(n, 0);

    while (m--) {
        cin >> x >> y;
        x--;
        y--;

        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }

    for (int i = 0; i < n; i++) {
        if (!visitados[i]) {
            dfs(grafo, visitados, i);
            familias++;
        }
    }

    cout << familias << endl;

    return 0;
}