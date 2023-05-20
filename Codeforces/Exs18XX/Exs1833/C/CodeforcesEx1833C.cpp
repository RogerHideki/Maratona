#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;

    cin >> t;
    while (t--) {
        bool beautiful = true;

        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        if ((a[0] & 1) == 0) {
            for (int i = 0; i < n; i++) {
                if ((a[i] & 1) == 1) {
                    beautiful = false;
                    break;
                }
            }
        }

        cout << (beautiful ? "YES" : "NO") << endl;
    }

    return 0;
}