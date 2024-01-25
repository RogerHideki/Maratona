#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> ts;
vector<bool> visiteds;

void toposort(int u) {
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!visiteds[v]) toposort(v);
    }
    ts.emplace_back(u);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, y;
    cin >> n >> m;
    graph.assign(n, {});
    while (m--) {
        cin >> x >> y;
        graph[x].emplace_back(y);
    }
    visiteds.assign(n, false);
    for (int u = 0; u < n; u++) {
        if (!visiteds[u]) toposort(u);
    }
    for (int i = n - 1; i >= 0; i--) cout << ts[i] << ' ';
    cout << '\n';
    return 0;
}