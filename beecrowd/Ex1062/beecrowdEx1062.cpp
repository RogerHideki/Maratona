#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        int vagao;

        while (cin >> vagao && vagao != 0) {
            queue<int> a, b;
            stack<int> e;
            bool possivel = 1;

            a.push(1);
            b.push(vagao);

            for (int i = 2; i <= n; i++) {
                a.push(i);
                cin >> vagao;
                b.push(vagao);
            }

            while (b.size() != 0) {
                if (a.size() != 0 && b.front() == a.front()) {
                    b.pop();
                    a.pop();
                } else if (e.size() != 0 && b.front() == e.top()) {
                    b.pop();
                    e.pop();
                } else if (a.size() != 0) {
                    e.push(a.front());
                    a.pop();
                } else {
                    possivel = 0;
                    break;
                }
            }

            if (possivel) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

        cout << endl;
    }

    return 0;
};