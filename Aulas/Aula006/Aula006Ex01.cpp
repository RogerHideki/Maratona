#include<iostream>
#include<set>

using namespace std;

int main() {
    int t;

    cin >> t;
    while (t--) {
        int n, id;
        set<int> s;

        cin >> n;
        while (n--) {
            cin >> id;
            s.insert(id);
        }

        for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
            cout << *it << endl;
        }

        cout << s.size() << endl;
    }

    return 0;
}