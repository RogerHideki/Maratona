class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int numEnd = num.size() - 1;
        string number;
        for (int i = 1; i < numEnd; i++) {
            if (num[i - 1] == num[i] && num[i] == num[i + 1]) {
                number = num[i];
                ans = max(ans, number);
            }
        }
        ans += ans + ans;
        return ans;
    }
};