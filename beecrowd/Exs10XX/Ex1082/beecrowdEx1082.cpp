#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &grafo, vector<bool> &visitados, int u) {
    visitados[u] = true;

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
        vector<bool> impressos(v, false);
        int componentes = 0;

        cout << "Case #" << caso << ":" << endl;

        for (int i = 0; i < v; i++) {
            if (!visitados[i]) {
                dfs(grafo, visitados, i);

                for (int j = 0; j < v; j++) {
                    if (visitados[j] && !impressos[j]) {
                        impressos[j] = true;

                        cout << (char) (j + 'a') << ',';
                    }
                }
                cout << endl;

                componentes++;
            }
        }

        cout << componentes << " connected components" << endl << endl;
    }

    return 0;
}