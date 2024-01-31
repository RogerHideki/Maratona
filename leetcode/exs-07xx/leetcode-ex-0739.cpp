class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &temperatures) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = temperatures.size();
        stack<int> s;
        vector<int> ans(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && temperatures[i] >= temperatures[s.top()]) s.pop();
            ans[i] = ((s.empty()) ? 0 : s.top() - i);
            s.emplace(i);
        }
        return ans;
    }
};