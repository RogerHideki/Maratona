class Solution {
public:
    int numberOfBeams(vector <string> &bank) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans, devicesRi, devicesRj;
        ans = devicesRi = devicesRj = 0;
        for (auto &row: bank) {
            for (auto &cell: row) {
                if (cell == '1') {
                    ans += devicesRi;
                    devicesRj++;
                }
            }
            if (devicesRj) {
                devicesRi = devicesRj;
                devicesRj = 0;
            }
        }
        return ans;
    }
};