#include <iostream>
#include <vector>
#include <queue>
#include <climits>

#define INF INT_MAX

using namespace std;

void bfs(vector<vector<int>> &grafo, vector<int> &distancias, int u) {
    queue<int> q;
    q.push(u);
    distancias[u] = 0;
    while (!q.empty()) {
        u = q.front();
        q.pop();
        int size = grafo[u].size();
        for (int i = 0; i < size; i++) {
            int v = grafo[u][i];
            if (distancias[v] == INF) {
                distancias[v] = distancias[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    int o, d, k, deletado;

    while (cin >> o >> d >> k && !(o == 0 && d == 0 && k == 0)) {
        vector<bool> canais(100001, true);
        for (int i = 0; i < k; i++) {
            cin >> deletado;
            canais[deletado] = false;
        }
        vector<vector<int>> grafo(100001 - k);
        for (int i = 1; i <= 100000; i++) {
            if (canais[i]) {
                if (i != 100000 && canais[i + 1]) grafo[i].push_back(i + 1);
                if (i != 1 && canais[i - 1]) grafo[i].push_back(i - 1);
                if (i <= 50000 && canais[2 * i]) grafo[i].push_back(2 * i);
                if (i <= 33333 && canais[3 * i]) grafo[i].push_back(3 * i);
                if ((i & 1) == 0 && canais[i / 2]) grafo[i].push_back(i / 2);
            }
        }
        vector<int> distancias(100001, INF);
        bfs(grafo, distancias, o);
        cout << (distancias[d] == INF ? -1 : distancias[d]) << "\n";
    }

    return 0;
}