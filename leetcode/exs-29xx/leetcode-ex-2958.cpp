class Solution {
public:
    int maxSubarrayLength(vector<int> &nums, int k) {
        unordered_map<int, int> uM;
        int ans = 0;
        int numsSize = nums.size();
        for (int i = 0, j = 0; j < numsSize; j++) {
            uM[nums[j]]++;
            while (uM[nums[j]] > k) {
                uM[nums[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};