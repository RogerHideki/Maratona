#include <iostream>
#include <vector>
#include <queue>
#include <climits>

#define INF INT_MAX

using namespace std;

void bfs(vector<vector<int>> &grafo, int u, vector<int> &distancia) {
    queue<int> q;
    q.push(u);
    distancia[u] = 0;
    while (!q.empty()) {
        u = q.front();
        q.pop();
        for (int i = 0; i < grafo[u].size(); i++) {
            int v = grafo[u][i];
            if (distancia[v] == INF) {
                distancia[v] = distancia[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int n, m, x, y;

    cin >> n >> m;

    vector<vector<int>> grafo(n);
    vector<int> distancia(n, INF);

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--, y--;

        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }


    return 0;
}