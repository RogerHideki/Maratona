#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> componente;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int u) {
    visitados[u] = true;
    componente.insert(u);

    int size = grafo[u].size();
    for (int i = 0; i < size; i++) {
        int v = grafo[u][i];
        if (!visitados[v]) dfs(grafo, visitados, v);
    }
}

int main() {
    int n, v, e, x, y;
    char vX, vY;

    cin >> n;
    for (int caso = 1; n--; caso++) {
        cin >> v >> e;

        vector<vector<int>> grafo(v);

        while (e--) {
            cin >> vX >> vY;

            x = vX - 'a';
            y = vY - 'a';

            grafo[x].push_back(y);
            grafo[y].push_back(x);
        }

        vector<bool> visitados(v, false);
        int nComponentes = 0;

        cout << "Case #" << caso << ":\n";

        for (int i = 0; i < v; i++) {
            if (!visitados[i]) {
                componente.clear();
                dfs(grafo, visitados, i);
                nComponentes++;

                for (set<int>::iterator it = componente.begin(); it != componente.end(); it++)
                    cout << (char) (*it + 'a') << ',';
                cout << "\n";
            }
        }

        cout << nComponentes << " connected components\n\n";
    }

    return 0;
}