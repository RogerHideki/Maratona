class Solution {
public:
    int buyChoco(vector<int> &prices, int money) {
        int min1 = 100;
        int min2 = 100;
        for (auto &price: prices) {
            if (min1 > price) {
                min2 = min1;
                min1 = price;
            } else min2 = min(min2, price);
        }
        int leftover = money - min1 - min2;
        return (leftover >= 0) ? leftover : money;
    }
};