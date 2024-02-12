class Solution {
public:
    int countMatchingSubarrays(vector<int> &nums, vector<int> &pattern) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int m = pattern.size();
        int n = nums.size() - m;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j;
            for (j = 0; j < m; j++) {
                if (pattern[j] == -1) {
                    if (nums[i + j] <= nums[i + j + 1]) break;
                } else if (!pattern[j]) {
                    if (nums[i + j] != nums[i + j + 1]) break;
                } else {
                    if (nums[i + j] >= nums[i + j + 1]) break;
                }
            }
            if (j == m) ans++;
        }
        return ans;
    }
};