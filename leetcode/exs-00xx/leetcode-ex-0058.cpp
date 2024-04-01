int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    return 0;
}();

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        while (ss >> s);
        return s.size();
    }
};