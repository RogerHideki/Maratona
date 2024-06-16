int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital) {
        int n = profits.size(), i = 0;
        vector<pair<int, int>> v(n);
        while (i < n) v[i++] = {capital[i], profits[i]};
        sort(v.begin(), v.end());
        i = 0;
        priority_queue<int, vector<int>> pq;
        while (k--) {
            while ((i < n) && (w >= v[i].first)) pq.emplace(v[i++].second);
            if (pq.empty()) continue;
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};