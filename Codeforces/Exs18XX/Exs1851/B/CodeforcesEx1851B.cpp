#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n, a;
    cin >> t;
    while (t--) {
        string ans = "YES";
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++) {
            cin >> a;
            v1[i] = a;
            v2[i] = a;
        }
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++) {
            if ((v1[i] & 1) != (v2[i] & 1)) {
                ans = "NO";
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}