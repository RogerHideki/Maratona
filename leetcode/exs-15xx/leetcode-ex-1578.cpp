class Solution {
public:
    int minCost(string colors, vector<int> &neededTime) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = colors.size();
        int i, ans;
        i = ans = 0;
        for (int j = 1; j < n; j++) {
            if (colors[i] != colors[j]) i = j;
            else if (neededTime[i] < neededTime[j]) {
                ans += neededTime[i];
                i = j;
            } else ans += neededTime[j];
        }
        return ans;
    }
};