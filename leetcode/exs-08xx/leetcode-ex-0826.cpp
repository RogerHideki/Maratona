int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker) {
        sort(worker.begin(), worker.end());
        int n = difficulty.size(), i = 0, maxProfit = 0, ans = 0;
        vector<pair<int, int>> v(n);
        while (i < n) v[i++] = {difficulty[i], profit[i]};
        sort(v.begin(), v.end());
        i = 0;
        for (auto &ability: worker) {
            while ((i < n) && (v[i].first <= ability)) maxProfit = max(maxProfit, v[i++].second);
            ans += maxProfit;
        }
        return ans;
    }
};