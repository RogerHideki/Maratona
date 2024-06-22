int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes) {
        int right = 0, dissatisfied = 0, ans = 0;
        for (; right < minutes; right++) {
            if (grumpy[right]) dissatisfied += customers[right];
            else ans += customers[right];
        }
        int n = customers.size(), left = 0, maxDissatisfied = dissatisfied;
        while (right < n) {
            if (grumpy[left]) dissatisfied -= customers[left];
            if (grumpy[right]) dissatisfied += customers[right];
            else ans += customers[right];
            maxDissatisfied = max(maxDissatisfied, dissatisfied);
            left++;
            right++;
        }
        return ans + maxDissatisfied;
    }
};