class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> memo(n, 1);
        vector<int> prev(n, -1);
        int k = 0;
        for (int j = 1; j < n; j++) {
            for (int i = 0; i < j; i++) {
                if ((nums[j] % nums[i]) || (memo[j] > memo[i])) continue;
                memo[j] = memo[i] + 1;
                prev[j] = i;
            }
            if (memo[k] < memo[j]) k = j;
        }
        vector<int> ans(memo[k]);
        while (k != -1) {
            ans[memo[k] - 1] = nums[k];
            k = prev[k];
        }
        return ans;
    }
};