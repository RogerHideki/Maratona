class Solution {
public:
    int minimumCost(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, smallest1, smallest2;
        n = nums.size();
        smallest1 = 50;
        for (int i = 1; i < n; i++) {
            if (smallest1 >= nums[i]) {
                smallest2 = smallest1;
                smallest1 = nums[i];
            } else smallest2 = min(smallest2, nums[i]);
        }
        return nums[0] + smallest1 + smallest2;
    }
};