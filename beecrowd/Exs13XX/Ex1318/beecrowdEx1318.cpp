#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, t;

    while (cin >> n >> m && !(n == 0 && m == 0)) {
        vector<int> v(n);
        int clones = 0;

        while (m--) {
            cin >> t;
            if (v[t - 1] == 1) clones++;
            v[t - 1]++;
        }
        cout << clones << endl;
    }

    return 0;
}