class Solution {
public:
    int n;
    vector <vector<int>> graph;
    vector<int> dist, ans;

    void bfs(int u) {
        dist[u] = -1;
        queue<int> q;
        q.push(u);
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (auto &v: graph[u]) {
                if (dist[v] != n) continue;
                dist[v] = dist[u] + 1;
                q.push(v);
                ans[dist[v]]++;
            }
        }
    }

    vector<int> countOfPairs(int n, int x, int y) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->n = n;
        graph.assign(n, {});
        for (int u = 1; u < n; u++) {
            graph[u - 1].emplace_back(u);
            graph[u].emplace_back(u - 1);
        }
        if (x != y) {
            x--;
            y--;
            graph[x].emplace_back(y);
            graph[y].emplace_back(x);
        }
        ans.assign(n, 0);
        for (int u = 0; u < n; u++) {
            dist.assign(n, n);
            bfs(u);
        }
        return ans;
    }
};