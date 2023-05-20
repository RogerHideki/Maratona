#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;
    while (t--) {
        set<string> melodies;

        cin >> n >> s;
        for (int i = 1; i < n; i++) melodies.insert(s.substr(i - 1, 2));
        cout << melodies.size() << endl;
    }

    return 0;
}