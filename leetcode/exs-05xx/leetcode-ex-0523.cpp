int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool checkSubarraySum(vector<int> &nums, int k) {
        int n = nums.size(), key = nums[0] % k;
        set<int> st = {0, key};
        for (int i = 1; i < n; i++) {
            int mod = nums[i] % k;
            if (mod) {
                key = (key + mod) % k;
                if (st.find(key) != st.end()) return true;
                st.insert(key);
            } else if (!(nums[i - 1] % k)) return true;
        }
        return false;
    }
};