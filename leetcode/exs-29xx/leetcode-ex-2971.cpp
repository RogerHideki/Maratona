class Solution {
public:
    long long largestPerimeter(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(), nums.end(), greater<int>());
        long long int ans = 0;
        for (auto &num: nums) ans += num;
        int i = 0;
        int n = nums.size() - 2;
        for (; i < n; i++) {
            if ((ans - nums[i]) > nums[i]) break;
            ans -= nums[i];
        }
        return ((i != n) ? ans : -1);
    }
};