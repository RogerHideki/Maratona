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
    int t, n, m, x, y;

    cin >> t;
    for (int i = 1; t--; i++) {
        int faltam = 0;

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

        dfs(grafo, visitados, 0);

        for (int i = 1; i < n; i++) {
            if (!visitados[i]) {
                dfs(grafo, visitados, i);
                faltam++;
            }
        }

        cout << "Caso #" << i << ": ";
        (faltam == 0 ? cout << "a promessa foi cumprida" : cout << "ainda falta(m) " << faltam << " estrada(s)");
        cout << endl;
    }

    return 0;
}