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
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    getline(cin, s);
    while (t--) {
        getline(cin, s);
        int V = s[0] - 'A' + 1;
        graph.assign(V, {});
        while (getline(cin, s) && !s.empty()) {
            int x = s[0] - 'A';
            int y = s[1] - 'A';
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        visiteds.assign(V, false);
        int ans = 0;
        for (int u = 0; u < V; u++) {
            if (!visiteds[u]) {
                ans++;
                dfs(u);
            }
        }
        cout << ans << '\n';
        if (t) cout << '\n';
    }
    return 0;
}