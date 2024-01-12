class Solution {
public:
    bool halvesAreAlike(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n = s.size() / 2;
        int i, amount;
        i = amount = 0;
        for (; i < n; i++) {
            for (auto &vowel: vowels) {
                if (s[i] == vowel) {
                    amount++;
                    break;
                }
            }
        }
        n *= 2;
        for (; i < n; i++) {
            for (auto &vowel: vowels) {
                if (s[i] == vowel) {
                    amount--;
                    break;
                }
            }
        }
        return !amount;
    }
};