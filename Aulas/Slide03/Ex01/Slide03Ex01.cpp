#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int u) {
    visitados[u] = true;
    for (auto v: grafo[u]) if (!visitados[v]) dfs(grafo, visitados, v);
}

int main() {
    int n, m;
    int x, y;
    cin >> n >> m;
    vector<vector<int>> matrizAdjacencia(n, vector<int>(n, 0));
    vector<vector<int>> listaAdjacencia(n);
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--, y--;
        matrizAdjacencia[x][y] = 1;
        matrizAdjacencia[y][x] = 1;
        listaAdjacencia[x].push_back(y);
        listaAdjacencia[y].push_back(x);
    }
    int u;
    vector<bool> visitados(n, false);
    cin >> u;
    dfs(listaAdjacencia, visitados, u);
    return 0;
}