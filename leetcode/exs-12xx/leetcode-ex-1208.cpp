int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        vector<int> prefixSum(n + 1);
        prefixSum[0] = 0;
        for (int i = 0; i < n; i++) prefixSum[i + 1] = prefixSum[i] + abs(s[i] - t[i]);
        int left = 0, right = 1, ans = 0;
        while (right <= n) {
            if ((prefixSum[right] - prefixSum[left]) <= maxCost) {
                ans = max(ans, right - left);
                right++;
            } else left++;
        }
        return ans;
    }
};