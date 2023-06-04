#include <iostream>
#include <vector>

using namespace std;

int nMovimentos;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int u) {
    visitados[u] = true;
    int size = grafo[u].size();
    for (int i = 0; i < size; i++) {
        int v = grafo[u][i];
        if (!visitados[v]) {
            nMovimentos += 2;
            dfs(grafo, visitados, v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    int t, u, n, m, x, y;
    cin >> t;
    while (t--) {
        cin >> u >> n >> m;
        vector<vector<int>> grafo(n);
        while (m--) {
            cin >> x >> y;
            grafo[x].push_back(y);
            grafo[y].push_back(x);
        }
        vector<bool> visitados(n, false);
        nMovimentos = 0;
        dfs(grafo, visitados, u);
        cout << nMovimentos << endl;
    }

    return 0;
}