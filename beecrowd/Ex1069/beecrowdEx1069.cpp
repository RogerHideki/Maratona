#include<iostream>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int parte = 0, nDiamantes = 0;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '<') {
                parte++;
            } else if (s[j] == '>') {
                if (parte >= 1) {
                    parte--;
                    nDiamantes++;
                }
            }
        }
        cout << nDiamantes << "\n";
    }

    return 0;
}