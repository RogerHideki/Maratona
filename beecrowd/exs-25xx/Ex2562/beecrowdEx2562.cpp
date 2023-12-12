#include <iostream>
#include <vector>

using namespace std;

int output = 0;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int u) {
    visitados[u] = true;
    output++;

    int size = grafo[u].size();
    for (int i = 0; i < size; i++) {
        int v = grafo[u][i];
        if (!visitados[v]) dfs(grafo, visitados, v);
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    int n, m, a, b, e;

    while (cin >> n >> m) {
        vector<vector<int>> grafo(n);

        while (m--) {
            cin >> a >> b;
            a--;
            b--;
            grafo[a].push_back(b);
            grafo[b].push_back(a);
        }

        vector<bool> visitados(n, false);
        output = 0;
        cin >> e;
        dfs(grafo, visitados, --e);

        cout << output << "\n";
    }

    return 0;
}