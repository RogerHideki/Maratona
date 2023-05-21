#include <iostream>

using namespace std;

int main() {
    int n, sequenciaSize = 0, answer = 0;
    string s;

    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') sequenciaSize++;
        else if (sequenciaSize == 1) sequenciaSize = 0;
        else if (sequenciaSize > 1) {
            answer += sequenciaSize;
            sequenciaSize = 0;
        }

        if (i == n - 1 && sequenciaSize > 1) answer += sequenciaSize;
    }

    cout << answer << endl;

    return 0;
}