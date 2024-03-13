class Solution {
public:
    int pivotInteger(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int left = 0;
        int right = (n * n + n) / 2;
        for (int i = 1; left <= right; i++) {
            right -= i;
            if (left == right) return i;
            left += i;
        }
        return -1;
    }
};