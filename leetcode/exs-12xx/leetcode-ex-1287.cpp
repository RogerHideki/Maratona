class Solution {
public:
    int findSpecialInteger(vector<int> &arr) {
        vector<int> v(100001, 0);
        int quarter = arr.size() / 4;
        int i = 0;
        while (++v[arr[i]] <= quarter) i++;
        return arr[i];
    }
};