#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>

#define INF INT_MAX/2

using namespace std;

vector<int> dist;

void dijkstra(vector<vector<pair<int, int>>> &grafo, int s) {
    int n = grafo.size();
    dist.assign(n, INF);
    dist[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    while (!pq.empty()) {
        pair<int, int> front = pq.top();
        pq.pop();
        int u = front.second;
        if (front.first == dist[u]) {
            for (int i = 0; i < grafo[u].size(); i++) {
                pair<int, int> aresta = grafo[u][i];
                int v = aresta.first;
                int custo = aresta.second;
                if (dist[u] + custo < dist[v]) {
                    dist[v] = dist[u] + custo;
                    pq.push({dist[v], v});
                }
            }
        }
    }
}

int main() {
    int n, m;
    int x, y, peso;
    cin >> n >> m;
    vector<vector<pair<int, int>>> grafo(n);
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> peso;
        grafo[x].push_back({y, peso});
    }
    dijkstra(grafo, 0);
    for (int i = 0; i < n; i++) cout << dist[i] << '\n';
    return 0;
}