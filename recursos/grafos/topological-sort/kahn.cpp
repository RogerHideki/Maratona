#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, y;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    vector<int> inDegrees(n);
    while (m--) {
        cin >> x >> y;
        graph[x].emplace_back(y);
        inDegrees[y]++;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int u = 0; u < n; u++) {
        if (!inDegrees[u]) pq.emplace(u);
    }
    while (!pq.empty()) {
        int u = pq.top();
        pq.pop();
        cout << u << ' ';
        for (auto &v: graph[u]) {
            --inDegrees[v];
            if (!inDegrees[v]) pq.emplace(v);
        }
    }
    cout << '\n';
    return 0;
}