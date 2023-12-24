class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int numsSize = nums.size();
        vector<int> ans(numsSize);
        for (int i = 1; i < numsSize; i += 2) {
            ans[i - 1] = nums[i];
            ans[i] = nums[i - 1];
        }
        return ans;
    }
};