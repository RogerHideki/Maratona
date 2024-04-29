#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> dfsNums, dfsLows;
vector<bool> visiteds;
int id = 1, amountSCC = 0;
stack<int> vertices;

void tarjanSCC(int u) {
    dfsLows[u] = dfsNums[u] = id++;
    vertices.emplace(u);
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!dfsNums[v]) tarjanSCC(v);
        if (visiteds[v]) dfsLows[u] = min(dfsLows[u], dfsLows[v]);
    }
    if (dfsNums[u] != dfsLows[u]) return;
    amountSCC++;
    while (true) {
        int v = vertices.top();
        vertices.pop();
        visiteds[v] = false;
        if (v == u) return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n;
    graph.assign(++n, {});
    dfsNums.assign(n, 0);
    dfsLows.assign(n, 0);
    visiteds.assign(n, false);
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        graph[a].emplace_back(b);
    }
    for (int u = 1; u < n; u++) {
        if (!dfsNums[u]) tarjanSCC(u);
    }
    cout << (amountSCC == 1 ? 'S' : 'N') << '\n';
    return 0;
}