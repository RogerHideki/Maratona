#include <iostream>

using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        for (int i = 1; i < s.size(); i++) {
            if (i > 0 && s[i - 1] == s[i]) {
                if (i > 1 && s[i - 2] != s[i - 1]) {
                    s.erase(i - 2, 2);
                    i -= 3;
                }
            }
            if (i > 0 && s[i - 1] == s[i]) {
                if (i + 1 < s.size() && s[i] != s[i + 1]) {
                    s.erase(i, 2);
                    i -= 2;
                }
            }
        }
        for (int i = 1; i < s.size(); i++) {
            if (s[i - 1] != s[i]) {
                s.erase(i - 1, 2);
                i--;
            }
        }
        cout << s.size() << '\n';
    }
    return 0;
}
