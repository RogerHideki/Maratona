class Solution {
public:
    bool isPathCrossing(string path) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_set<int> s;
        s.insert(0);
        int id = 0;
        for (auto &c: path) {
            if (c == 'N') id++;
            else if (c == 'E') id += 10001;
            else if (c == 'S') id--;
            else id -= 10001;
            if (s.find(id) != s.end()) return true;
            s.insert(id);
        }
        return false;
    }
};