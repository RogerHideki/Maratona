class Solution {
public:
    int countCharacters(vector <string> &words, string chars) {
        vector<int> vC(26, 0);
        for (auto letter: chars) vC[letter - 'a']++;
        int i, ans = 0;
        for (auto word: words) {
            int wordSize = word.size();
            vector<int> vW(26, 0);
            for (i = 0; i < wordSize; i++) {
                int idx = word[i] - 'a';
                if (vW[idx] == vC[idx]) break;
                vW[idx]++;
            }
            if (i == wordSize) ans += wordSize;
        }
        return ans;
    }
};