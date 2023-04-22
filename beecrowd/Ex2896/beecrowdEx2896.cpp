#include<iostream>

using namespace std;

int main() {
    int t;

    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        cout << n % k + n / k << endl;
    }

    return 0;
}