class Solution {
public:
    int minOperations(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int sSize = s.size();
        int choice1 = 0;
        for (int i = 0; i < sSize; i++) {
            if ((i & 1) == (s[i] - '0')) choice1++;
        }
        return min(choice1, (sSize - choice1));
    }
};