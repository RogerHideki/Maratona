#include <iostream>

using namespace std;

int main() {
    int s, m, h;

    cin >> s;

    m = s / 60;
    s %= 60;
    h = m / 60;
    m %= 60;

    cout << h << ':' << m << ':' << s << endl;

    return 0;
}