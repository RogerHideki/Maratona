#include<iostream>
#include<stack>

using namespace std;

int main() {
    string s;

    while (cin >> s) {
        stack<char> p;
        bool ans = true;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                p.push('(');
            } else if (s[i] == ')') {
                if (p.size() == 0) {
                    ans = false;
                    break;
                } else p.pop();
            }
        }

        if (p.size() > 0) ans = false;

        if (ans) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }

    return 0;
}