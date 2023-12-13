#include <iostream>

using namespace std;

int main() {
    int x, y, output = 0;

    cin >> x >> y;

    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }

    if ((x & 1) == 1) x++;

    for (int i = ++x; i < y; i += 2) output += i;

    cout << output << endl;

    return 0;
}