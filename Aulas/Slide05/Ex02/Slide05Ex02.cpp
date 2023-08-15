#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <algorithm>

#define INF INT_MAX / 2
#define pii pair<int, int>

using namespace std;

void bellman_ford(vector<vector<pii>> &grafo, int s) {
    int n = grafo.size();
    vector<int> dist(n, INF);
    dist[s] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int v = 0; v < n; v++) {
            for (auto [u, peso]: grafo[v]) {
                dist[u] = min(dist[u], dist[v] + peso);
            }
        }
    }
//    for (int v = 0; v < n; v++) {
//        for (auto [u, peso]: grafo[v]) {
//            if (dist[v] + peso < dist[u]) ciclo_negativo = true;
//        }
//    }
}

int main() {
    int n, m;
    int x, y, peso;
    cin >> n >> m;
    vector<vector<pii>> grafo(n);
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> peso;
        grafo[x].push_back({y, peso});
    }

    bellman_ford(grafo, 0);

    return 0;
}