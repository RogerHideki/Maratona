#include <iostream>
#include <cmath>

using namespace std;

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    cout << maiorAB(maiorAB(a, b), c) << " eh o maior" << endl;

    return 0;
}