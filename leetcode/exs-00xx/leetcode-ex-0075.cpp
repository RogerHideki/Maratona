int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void sortColors(vector<int> &nums) {
        int i = 0, left = 0, right = nums.size() - 1;
        while (i <= right) {
            while ((left < right) && !nums[left]) left++;
            while ((left < right) && (nums[right] == 2)) right--;
            i = max(left, i);
            if (!nums[i]) swap(nums[left++], nums[i++]);
            else if (nums[i] == 2) swap(nums[i], nums[right--]);
            else i++;
        }
    }
};