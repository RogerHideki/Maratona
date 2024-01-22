class Solution {
public:
    int minimumArrayLength(vector<int> &nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int smallest = 1000000000;
        int ammount = 0;
        for (auto &num: nums) {
            if (smallest > num) {
                smallest = num;
                ammount = 1;
            } else if (smallest == num) ammount++;
        }
        for (auto &num: nums) {
            if ((num % smallest) != 0) return 1;
        }
        return (ammount >> 1) + (ammount & 1);
    }
};