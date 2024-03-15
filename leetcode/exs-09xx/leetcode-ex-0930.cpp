class Solution {
public:
    int numSubarraysWithSum(vector<int> &nums, int goal) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(nums.size() + goal + 1, 0);
        v[goal] = 1;
        int prefixSum = 0;
        int ans = 0;
        for (auto &num: nums) {
            prefixSum += num;
            ans += v[prefixSum];
            v[prefixSum + goal]++;
        }
        return ans;
    }
};