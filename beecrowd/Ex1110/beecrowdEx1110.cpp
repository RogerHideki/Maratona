#include<iostream>
#include<queue>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        queue<int> q;
        for (int i = 1; i <= n; i++) {
            q.push(i);
        }

        cout << "Discarded cards: ";
        bool first = true;

        while(q.size() >= 2) {
            if (first == true) {
                cout << q.front();
                first = false;
            } else {
                cout << ", " << q.front();
            }
            q.pop();
            q.push(q.front());
            q.pop();
        }

        cout << endl << "Remaining card: " << q.front() << endl;
    }
}