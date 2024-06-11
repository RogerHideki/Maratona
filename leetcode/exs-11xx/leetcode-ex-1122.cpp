int xlr8 = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bitset<1001> bs;

    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2) {
        for (auto &element: arr2) bs[element] = 1;
        vector<int> v(1001, 0), arr3;
        for (auto &element: arr1) {
            v[element]++;
            if (bs[element]) continue;
            arr3.emplace_back(element);
            bs[element] = 1;
        }
        int i = 0;
        for (auto &element: arr2) {
            for (int j = 0; j < v[element]; j++) arr1[i + j] = element;
            i += v[element];
        }
        sort(arr3.begin(), arr3.end());
        for (auto &element: arr3) {
            for (int j = 0; j < v[element]; j++) arr1[i + j] = element;
            i += v[element];
        }
        return arr1;
    }
};