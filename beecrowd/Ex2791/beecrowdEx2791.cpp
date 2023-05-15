#include <iostream>

using namespace std;

int main() {
    int c;

    for (int i = 1; i <= 4; i++) {
        cin >> c;
        if (c == 1) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}