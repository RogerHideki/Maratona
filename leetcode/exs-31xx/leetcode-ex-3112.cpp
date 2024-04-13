int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
#define pii pair<int, int>
#define INF 100000

    vector<int> minimumTime(int n, vector<vector<int>> &edges, vector<int> &disappear) {
        vector<vector<pii>> graph(n);
        for (auto &edge: edges) {
            graph[edge[0]].emplace_back(edge[1], edge[2]);
            graph[edge[1]].emplace_back(edge[0], edge[2]);
        }
        priority_queue<pii, vector<pii >, greater<pii>> pq;
        pq.emplace(0, 0);
        vector<int> ans(n, INF);
        ans[0] = 0;
        while (!pq.empty()) {
            auto [distU, u] = pq.top();
            pq.pop();
            if (distU != ans[u]) continue;
            for (auto &edge: graph[u]) {
                int v = edge.first, distV = distU + edge.second;
                if ((ans[v] <= distV) || (distV >= disappear[v])) continue;
                ans[v] = distV;
                pq.emplace(distV, v);
            }
        }
        for (auto &dist: ans) {
            if (dist == INF) dist = -1;
        }
        return ans;
    }
};