int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minPatches(vector<int> &nums, int n) {
        int i = 0, m = nums.size(), ans = 0;
        long long int sum = 0;
        while ((i < m) && (sum < n)) {
            int patch = sum + 1;
            if (nums[i] <= patch) sum += nums[i++];
            else {
                sum += patch;
                ans++;
            }
        }
        while (sum < n) {
            sum = 2 * sum + 1;
            ans++;
        }
        return ans;
    }
};