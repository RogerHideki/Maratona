#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int &u) {
    visitados[u] = true;
    for (int i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (!visitados[v]) dfs(grafo, visitados, v);
    }

}

int main() {
    int n, m; /* Número de vértices / número de arestas */
    int x, y;

    cin >> n >> m;

    vector<vector<int>> matrizAdjacencia(n, vector<int>(n, 0));
    vector<vector<int>> listaAdjacencia(n);

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--, y--;

        matrizAdjacencia[x][y]; // Lista de adjacência
        matrizAdjacencia[y][x]; // Lista de adjacência

        listaAdjacencia[x].push_back(y); // Matriz de adjacência
        listaAdjacencia[y].push_back(x); // Matriz de adjacência
    }

    int u;
    vector<bool> visitados(n, 0);

    cin >> u;

    dfs(listaAdjacencia, visitados, u);

    return 0;
}