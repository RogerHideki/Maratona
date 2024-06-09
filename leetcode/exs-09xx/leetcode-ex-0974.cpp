int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int subarraysDivByK(vector<int> &nums, int k) {
        int key = 0, ans = 0;
        vector<int> v(k, 0);
        v[0] = 1;
        for (auto &num: nums) {
            key = (key + (num % k + k) % k) % k;
            ans += v[key];
            v[key]++;
        }
        return ans;
    }
};