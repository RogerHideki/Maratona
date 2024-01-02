class Solution {
public:
    vector <vector<int>> findMatrix(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(nums.size() + 1, 0);
        vector <vector<int>> ans;
        for (auto &num: nums) {
            if (v[num] == ans.size()) ans.push_back({num});
            else ans[v[num]].emplace_back(num);
            v[num]++;
        }
        return ans;
    }
};