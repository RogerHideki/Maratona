class Solution {
public:
    vector<int> nums, memo;
    int n;

    int f(int i) {
        if (i >= n) return 0;
        if (memo[i] != -1) return memo[i];
        return memo[i] = max(nums[i] + f(i + 2), f(i + 1));
    }

    int rob(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        this->nums = nums;
        n = nums.size();
        memo.assign(n, -1);
        return f(0);
    }
};