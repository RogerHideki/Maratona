class Solution {
public:
    string firstPalindrome(vector<string> &words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (auto &word: words) {
            int i = 0;
            int j = word.size() - 1;
            bool isPalindrome = true;
            while (i < j) {
                if (word[i++] == word[j--]) continue;
                isPalindrome = false;
                break;
            }
            if (isPalindrome) return word;
        }
        return "";
    }
};