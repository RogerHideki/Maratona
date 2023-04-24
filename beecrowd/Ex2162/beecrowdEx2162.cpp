#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, i;
    bool pico;

    cin >> n;
    vector<int> v(n);
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (i = 1; i < n; i++) {
        if (i == 1) {
            if (v[i] > v[i - 1]) {
                pico = 1;
            } else if (v[i] < v[i - 1]){
                pico = 0;
            } else {
                cout << 0;
                break;
            }
        } else if (!pico && v[i] > v[i - 1]) {
            pico = 1;
        } else if (pico && v[i] < v[i - 1]){
            pico = 0;
        } else {
            cout << 0;
            break;
        }
    }
    if (i == n) {
        cout << 1;
    }
    cout << endl;

    return 0;
}