int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string replaceWords(vector<string> &dictionary, string sentence) {
        set<string> st;
        for (auto &root: dictionary) st.insert(root);
        stringstream ss(sentence);
        string word, ans = "";
        while (ss >> word) {
            string prefix = "";
            for (auto &c: word) {
                prefix += c;
                if (st.find(prefix) != st.end()) break;
            }
            ans += (prefix + ' ');
        }
        ans.pop_back();
        return ans;
    }
};