class Solution {
public:
    vector <vector<string>> groupAnagrams(vector <string> &strs) {
        vector <vector<string>> output;
        unordered_map <string, vector<string>> m;
        int size = strs.size();
        for (int i = 0; i < size; i++) {
            string s = strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(s);
        }
        for (auto it = m.begin(); it != m.end(); it++) output.push_back(it->second);
        return output;
    }
};