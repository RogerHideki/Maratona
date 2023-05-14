#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, d;

    while (cin >> a >> d && !(a == 0 && d == 0)) {
        vector<int> b(a), c(d);

        for (int i = 0; i < a; i++) cin >> b[i];
        sort(b.begin(), b.end());

        for (int i = 0; i < d; i++) cin >> c[i];
        sort(c.begin(), c.end());

        cout << (b[0] >= c[1] ? 'N' : 'Y') << endl;
    }

    return 0;
}