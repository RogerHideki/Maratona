#include <bits/stdc++.h>

#define pii pair<int, int>
#define INF 1000000000

using namespace std;

vector<vector<pii>> graph;
vector<int> dists;

void dijkstra(int s) {
    priority_queue<pii, vector<pii >, greater<pii>> pq;
    pq.emplace(0, s);
    dists[s] = 0;
    while (!pq.empty()) {
        auto [distU, u] = pq.top();
        pq.pop();
        if (distU != dists[u]) continue;
        for (auto &edge: graph[u]) {
            int v = edge.first, distV = distU + edge.second;
            if (dists[v] <= distV) continue;
            dists[v] = distV;
            pq.emplace(distV, v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, u, v, w;
    cin >> n >> m;
    graph.assign(n, {});
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
    }
    dists.assign(n, INF);
    dijkstra(0);
    for (auto &dist: dists) cout << dist << '\n';
    return 0;
}