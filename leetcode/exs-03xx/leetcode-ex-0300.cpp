class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = nums.size();
        vector<int> v(n, 1);
        for (int j = 1; j < n; j++) {
            for (int i = j - 1; i >= 0; i--) {
                if (nums[i] < nums[j] && v[i] >= v[j]) v[j] = v[i] + 1;
            }
        }
        int ans = 0;
        for (auto &amount: v) ans = max(ans, amount);
        return ans;
    }
};