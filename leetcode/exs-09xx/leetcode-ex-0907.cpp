class Solution {
public:
    int sumSubarrayMins(vector<int> &arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = arr.size();
        stack <pair<int, int>> s;
        s.push({arr[0], 1});
        int sSum = arr[0];
        int ans = arr[0];
        for (int i = 1; i < n; i++) {
            auto sTop = s.top();
            int amount = 1;
            while (arr[i] <= sTop.first) {
                s.pop();
                sSum -= (sTop.first * sTop.second);
                amount += sTop.second;
                if (s.empty()) break;
                sTop = s.top();
            }
            s.push({arr[i], amount});
            sSum += (arr[i] * amount);
            ans = (ans + sSum) % 1000000007;
        }
        return ans;
    }
};