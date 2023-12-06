class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int coins = 1;
        int i = 0;
        while (n--) {
            if (i == 7) {
                coins -= 6;
                i = 0;
            }
            ans += coins;
            coins++;
            i++;
        }
        return ans;
    }
};