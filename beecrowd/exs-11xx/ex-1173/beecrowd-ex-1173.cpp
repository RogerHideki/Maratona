#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> n(10);

    cin >> n[0];
    cout << "N[0] = " << n[0] << endl;

    for (int i = 1; i < 10; i++) {
        n[i] = 2 * n[i - 1];
        cout << "N[" << i << "] = " << n[i] << endl;
    }

    return 0;
}