#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<bool> visiteds;

int dfs(int u) {
    int nCities = 1;
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!visiteds[v]) nCities += dfs(v);
    }
    return nCities;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, u, v, w;
    while (cin >> n >> m && (n != 0 || m != 0)) {
        n++;
        graph.assign(n, {});
        int maxW = INT_MIN;
        while (m--) {
            cin >> u >> v >> w;
            if (maxW <= w) {
                if (maxW < w) {
                    graph.assign(n, {});
                    maxW = w;
                }
                graph[u].emplace_back(v);
                graph[v].emplace_back(u);
            }
        }
        visiteds.assign(n, false);
        int ans = 0;
        for (u = 1; u < n; u++) {
            if (!visiteds[u]) ans = max(ans, dfs(u));
        }
        cout << ans << '\n';
    }
    return 0;
}