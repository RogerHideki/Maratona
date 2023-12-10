class Solution {
public:
#define ulli unsigned long long int

    ulli f(ulli a, ulli b, int mod) {
        ulli r = 1;
        while (b) {
            if (b & 1) r = (r * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return r;
    }

    vector<int> getGoodIndices(vector <vector<int>> &variables, int target) {
        vector<int> ans;
        for (int i = 0; i < variables.size(); i++) {
            ulli r = f(variables[i][0], variables[i][1], 10);
            r = f(r, variables[i][2], variables[i][3]);
            if (r == target) ans.push_back(i);
        }
        return ans;
    }
};