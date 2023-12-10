class Solution {
public:
    int countTestedDevices(vector<int> &batteryPercentages) {
        int ans = 0;
        for (auto num: batteryPercentages) {
            if (num > ans) ans++;
        }
        return ans;
    }
};