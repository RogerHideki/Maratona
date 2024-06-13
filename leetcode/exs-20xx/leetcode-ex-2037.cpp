int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int n = seats.size(), ans = 0;
        for (int i = 0; i < n; i++) ans += abs(seats[i] - students[i]);
        return ans;
    }
};