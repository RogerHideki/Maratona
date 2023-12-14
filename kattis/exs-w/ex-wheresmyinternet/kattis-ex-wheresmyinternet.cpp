#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visiteds;

void dfs(int u) {
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!visiteds[v]) dfs(v);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a, b;
    cin >> n >> m;
    n++;
    graph.assign(n, {});
    while (m--) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    visiteds.assign(n, false);
    dfs(1);
    bool allConnected = true;
    for (int i = 1; i < n; i++) {
        if (!visiteds[i]) {
            cout << i << '\n';
            allConnected = false;
        }
    }
    if (allConnected) cout << "Connected\n";
    return 0;
}