class Solution {
public:
    int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = startTime.size();
        vector <tuple<int, int, int>> v(n);
        for (int i = 0; i < n; i++) v[i] = {endTime[i], startTime[i], profit[i]};
        sort(v.begin(), v.end());
        map<int, int> m = {{0, 0}};
        for (auto &[j, i, value]: v) {
            value += prev(m.upper_bound(i))->second;
            if (value > m.rbegin()->second) m[j] = value;
        }
        return m.rbegin()->second;
    }
};