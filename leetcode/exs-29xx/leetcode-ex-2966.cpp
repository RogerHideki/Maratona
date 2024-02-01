class Solution {
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans(n / 3, vector<int>(3));
        for (int i = 0; i < n; i++) {
            ans[i / 3][i % 3] = nums[i];
            if ((nums[i] - ans[i / 3][0]) > k) return {};
        }
        return ans;
    }
};