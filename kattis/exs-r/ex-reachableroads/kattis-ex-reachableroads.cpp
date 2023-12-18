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
    int n, m, r, u, v;
    cin >> n;
    while (n--) {
        cin >> m >> r;
        graph.assign(m, {});
        while (r--) {
            cin >> u >> v;
            graph[u].emplace_back(v);
            graph[v].emplace_back(u);
        }
        visiteds.assign(m, false);
        int ans = -1;
        for (u = 0; u < m; u++) {
            if (!visiteds[u]) {
                ans++;
                dfs(u);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}