class Solution {
public:
    int countSetBits(int n) {
        int ans = 0;
        while (n) {
            ans += n & 1;
            n >>= 1;
        }
        return ans;
    }

    bool canSortArray(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        bool isSorted = false;
        int n = nums.size();
        while (!isSorted) {
            isSorted = true;
            for (int i = 1; i < n; i++) {
                if (nums[i - 1] <= nums[i]) continue;
                if (countSetBits(nums[i - 1]) != countSetBits(nums[i])) return false;
                isSorted = false;
                swap(nums[i - 1], nums[i]);
            }
            n--;
        }
        return true;
    }
};