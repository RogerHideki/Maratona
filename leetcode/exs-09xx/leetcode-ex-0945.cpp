int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minIncrementForUnique(vector<int> &nums) {
        vector<int> v(200000, 0);
        for (auto &num: nums) v[num]++;
        int sum = 0, ans = 0;
        for (auto &amount: v) {
            if (amount || sum) sum += amount - 1;
            ans += sum;
        }
        return ans;
    }
};