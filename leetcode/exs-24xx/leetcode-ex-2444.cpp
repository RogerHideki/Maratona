int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK) {
        int left = 0, n = nums.size(), idxMin = -1, idxMax = -1;
        long long int ans = 0;
        for (int right = 0; right < n; right++) {
            if ((nums[right] < minK) || (nums[right] > maxK)) {
                left = right + 1;
                continue;
            }
            if (nums[right] == minK) idxMin = right;
            if (nums[right] == maxK) idxMax = right;
            ans += max(min(idxMin, idxMax) - left + 1, 0);
        }
        return ans;
    }
};