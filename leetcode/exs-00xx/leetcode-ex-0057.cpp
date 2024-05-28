int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval) {
        int i = 0;
        int n = intervals.size();
        vector<vector<int>> ans;
        for (; (i < n) && (intervals[i][1] < newInterval[0]); i++) ans.emplace_back(intervals[i]);
        if (i < n) newInterval[0] = min(newInterval[0], intervals[i][0]);
        for (; (i < n) && (intervals[i][0] <= newInterval[1]); i++) {
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
        ans.emplace_back(newInterval);
        for (; i < n; i++) ans.emplace_back(intervals[i]);
        return ans;
    }
};