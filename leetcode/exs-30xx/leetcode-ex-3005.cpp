class Solution {
public:
    int maxFrequencyElements(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(101, 0);
        for (auto &num: nums) v[num]++;
        sort(v.begin(), v.end(), greater<int>());
        int ans = v[0];
        for (int i = 1; i < 101; i++) {
            if (v[i - 1] != v[i]) return ans;
            ans += v[i];
        }
        return ans;
    }
};