class Solution {
public:
    int minOperations(vector<int> &nums) {
        unordered_map<int, int> m;
        for (auto &num: nums) m[num]++;
        int ans = 0;
        for (auto &it: m) {
            int n = it.second;
            if (n == 1) return -1;
            ans += (n / 3);
            if (n % 3) ans++;
        }
        return ans;
    }
};