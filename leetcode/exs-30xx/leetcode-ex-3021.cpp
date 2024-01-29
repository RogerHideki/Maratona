class Solution {
public:
#define lli long long int

    long long flowerGame(int n, int m) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        lli evenX = n >> 1;
        lli oddX = evenX + (n & 1);
        lli evenY = m >> 1;
        lli oddY = evenY + (m & 1);
        return evenX * oddY + oddX * evenY;
    }
};