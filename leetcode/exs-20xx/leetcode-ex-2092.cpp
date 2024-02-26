bool orderByGreaterTime(vector<int> b, vector<int> a) {
    return (a[2] > b[2]);
}

void initSet(vector<int> &pset) {
    iota(pset.begin(), pset.end(), 0);
}

int findSet(vector<int> &pset, int i) {
    return pset[i] == i ? i : pset[i] = findSet(pset, pset[i]);
}

void unionSet(vector<int> &pset, int i, int j) {
    pset[findSet(pset, i)] = findSet(pset, j);
}

class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(meetings.begin(), meetings.end(), orderByGreaterTime);
        vector<int> pset1(n), pset2(n);
        initSet(pset1);
        unionSet(pset1, 0, firstPerson);
        pset2 = pset1;
        int time = meetings[0][2];
        vector<pair<int, int>> edges;
        for (auto &meeting: meetings) {
            if (time != meeting[2]) {
                for (auto &[x, y]: edges) {
                    if (findSet(pset2, 0) != findSet(pset2, x)) continue;
                    if (findSet(pset1, 0) != findSet(pset1, x)) unionSet(pset1, 0, x);
                    if (findSet(pset1, 0) != findSet(pset1, y)) unionSet(pset1, 0, y);
                }
                time = meeting[2];
                edges.clear();
                pset2 = pset1;
            }
            edges.emplace_back(meeting[0], meeting[1]);
            if (findSet(pset2, meeting[0]) != findSet(pset2, meeting[1])) {
                unionSet(pset2, meeting[0], meeting[1]);
            }
        }
        for (auto &[x, y]: edges) {
            if (findSet(pset2, 0) != findSet(pset2, x)) continue;
            if (findSet(pset1, 0) != findSet(pset1, x)) unionSet(pset1, 0, x);
            if (findSet(pset1, 0) != findSet(pset1, y)) unionSet(pset1, 0, y);
        }
        int representative = findSet(pset1, 0);
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (findSet(pset1, i) == representative) ans.emplace_back(i);
        }
        return ans;
    }
};