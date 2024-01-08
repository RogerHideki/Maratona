class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if (a == e) {
            if (c == e) {
                if ((b < d && d < f) || (f < d && d < b)) return 2;
                return 1;
            }
            return 1;
        }
        if (b == f) {
            if (d == f) {
                if ((a < c && c < e) || (e < c && c < a)) return 2;
                return 1;
            }
            return 1;
        }
        if (abs(c - e) == abs(d - f)) {
            if (abs(a - e) == abs(b - f)) {
                if ((c < a && a < e) || (e < a && a < c)) return 2;
                return 1;
            }
            return 1;
        }
        return 2;
    }
};