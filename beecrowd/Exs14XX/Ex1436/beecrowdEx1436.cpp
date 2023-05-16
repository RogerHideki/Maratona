#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;

    cin >> t;
    for (int i = 1; i <= t; i++) {
        int n;

        cin >> n;
        vector<int> idades(n);
        for (int j = 0; j < n; j++) {
            cin >> idades[j];
        }

        cout << "Case " << i << ": " << idades[n / 2] << endl;
    }

    return 0;
}