class Solution {
public:
#define lli long long int

    long long maximumSubarraySum(vector<int> &nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(100001, 0);
        int repeatsAmount = 0;
        lli sum = 0;
        for (int i = 0; i < k; i++) {
            if (v[nums[i]] == 1) repeatsAmount++;
            v[nums[i]]++;
            sum += nums[i];
        }
        int n = nums.size();
        lli ans = ((repeatsAmount) ? 0 : sum);
        for (int i = k; i < n; i++) {
            if (v[nums[i - k]] == 2) repeatsAmount--;
            v[nums[i - k]]--;
            if (v[nums[i]] == 1) repeatsAmount++;
            v[nums[i]]++;
            sum += (nums[i] - nums[i - k]);
            if (!repeatsAmount) ans = max(ans, sum);
        }
        return ans;
    }
};