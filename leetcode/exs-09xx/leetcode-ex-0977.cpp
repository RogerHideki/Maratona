class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (int i = nums.size() - 1; i >= 0; i--) nums[i] *= nums[i];
        sort(nums.begin(), nums.end());
        return nums;
    }
};