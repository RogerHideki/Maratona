class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) break;
            while ((left < right) && (s[left] == s[right])) left++;
            right--;
            while ((left < right) && (s[right] == s[right + 1])) right--;
        }
        return right - left + 1;
    }
};