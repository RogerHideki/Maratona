class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        map<string, vector<string>> m;
        for (auto &str: strs) {
            string s = str;
            sort(str.begin(), str.end());
            m[str].emplace_back(s);
        }
        vector<vector<string>> output(m.size());
        int i = 0;
        for (auto &it: m) {
            output[i] = it.second;
            i++;
        }
        return output;
    }
};