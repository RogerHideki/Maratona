#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> graph;
vector<int> inDegrees, ts;
vector<bool> visiteds;

void allToposort() {
    bool isSorted = true;
    for (int u = 0; u < n; u++) {
        if (inDegrees[u] || visiteds[u]) continue;
        isSorted = false;
        visiteds[u] = true;
        for (auto &v: graph[u]) inDegrees[v]--;
        ts.push_back(u);
        allToposort();
        visiteds[u] = false;
        for (auto &v: graph[u]) inDegrees[v]++;
        ts.pop_back();
    }
    if (!isSorted) return;
    for (auto &u: ts) cout << u << " ";
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, u, v;
    cin >> n >> m;
    graph.assign(n, {});
    inDegrees.assign(n, 0);
    while (m--) {
        cin >> u >> v;
        graph[u].emplace_back(v);
        inDegrees[v]++;
    }
    visiteds.assign(n, false);
    allToposort();
    return 0;
}