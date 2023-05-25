#include <iostream>

using namespace std;

int main() {
    int n, x;

    cin >> n;

    while (n--) {
        cin >> x;

        if (x != 0) {
            if ((x & 1) == 0) cout << "EVEN ";
            else cout << "ODD ";

            if (x > 0) cout << "POSITIVE";
            else cout << "NEGATIVE";
        } else cout << "NULL";
        cout << endl;
    }

    return 0;
}