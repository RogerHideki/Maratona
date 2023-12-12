#include <iostream>

using namespace std;

int main() {
    int t, a, output = 0;

    cin >> t;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        if (a == t) output++;
    }
    cout << output << endl;

    return 0;
}