#include <iostream>
#include <stack>

using namespace std;

int main() {
    int t;
    cin >> t;
    string pressedKeys;
    char letter;
    while (t--) {
        stack<int> uppercases, lowercases;
        cin >> pressedKeys;
        int pressedKeysSize = pressedKeys.size();
        for (int i = 0; i < pressedKeysSize; i++) {
            letter = pressedKeys[i];
            if (letter == 'B') {
                pressedKeys[i] = ' ';
                if (!uppercases.empty()) {
                    pressedKeys[uppercases.top()] = ' ';
                    uppercases.pop();
                }
            } else if (letter == 'b') {
                pressedKeys[i] = ' ';
                if (!lowercases.empty()) {
                    pressedKeys[lowercases.top()] = ' ';
                    lowercases.pop();
                }
            } else if (letter <= 'Z') {
                uppercases.push(i);
            } else {
                lowercases.push(i);
            }
        }
        for (int i = 0; i < pressedKeysSize; i++) {
            letter = pressedKeys[i];
            if (letter != ' ') cout << letter;
        }
        cout << '\n';
    }
    return 0;
}
