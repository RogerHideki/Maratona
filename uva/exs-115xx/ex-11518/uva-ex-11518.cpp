#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visiteds;
int ans;

void dfs(int u) {
    ans++;
    visiteds[u] = true;
    for (auto &v: graph[u]) {
        if (!visiteds[v]) dfs(v);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, l, x, y, z;
    cin >> t;
    while (t--) {
        cin >> n >> m >> l;
        n++;
        graph.assign(n, {});
        visiteds.assign(n, false);
        while (m--) {
            cin >> x >> y;
            graph[x].emplace_back(y);
        }
        ans = 0;
        while (l--) {
            cin >> z;
            if (!visiteds[z]) dfs(z);
        }
        cout << ans << '\n';
    }
    return 0;
}