#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;
    while (n--) {
        int m, certos = 0;

        cin >> m;
        vector<int> v1(m), v2(m);
        for (int i = 0; i < m; i++) {
            int value;

            cin >> value;
            v1[i] = value;
            v2[i] = value;
        }

        sort(v1.begin(), v1.end(), greater<int>());

        for (int i = 0; i < m; i++) {
            if (v1[i] == v2[i]) certos++;
        }

        cout << certos << endl;
    }

    return 0;
}