class Solution {
public:
    bool arrayStringsAreEqual(vector <string> &v1, vector <string> &v2) {
        string word1 = "";
        for (auto s: v1) word1 += s;
        string word2 = "";
        for (auto s: v2) word2 += s;
        return word1 == word2;
    }
};