class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int ans = 0;
        int wordSize = word.size();
        for (int i = 1; i < wordSize; i++) {
            if (abs(word[i - 1] - word[i]) <= 1) {
                ans++;
                i++;
            }
        }
        return ans;
    }
};