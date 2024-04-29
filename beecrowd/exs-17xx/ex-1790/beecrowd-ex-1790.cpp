#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> dfsNums, dfsLows;
int id, amountBridges;

void bridge(int u, int p) {
    dfsLows[u] = dfsNums[u] = id++;
    for (auto &v: graph[u]) {
        if (!dfsNums[v]) {
            bridge(v, u);
            if (dfsLows[v] > dfsNums[u]) amountBridges++;
            dfsLows[u] = min(dfsLows[u], dfsLows[v]);
        } else if (v != p) dfsLows[u] = min(dfsLows[u], dfsNums[v]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, p, x, y;
    while (cin >> c >> p) {
        graph.assign(++c, {});
        dfsNums.assign(c, 0);
        dfsLows.assign(c, 0);
        id = 1;
        amountBridges = 0;
        while (p--) {
            cin >> x >> y;
            graph[x].emplace_back(y);
            graph[y].emplace_back(x);
        }
        bridge(y, -1);
        cout << amountBridges << '\n';
    }
    return 0;
}