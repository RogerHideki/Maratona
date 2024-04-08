int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches) {
        vector<int> v(2, 0);
        for (auto &student: students) v[student]++;
        int ans = students.size();
        for (auto &sandwiche: sandwiches) {
            if (!v[sandwiche]--) return ans;
            ans--;
        }
        return 0;
    }
};