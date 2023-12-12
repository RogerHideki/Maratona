#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    while (n--) {
        vector<int> dimensoes(4);
        for (int i = 0; i < 4; i++) cin >> dimensoes[i];
        sort(dimensoes.begin(), dimensoes.begin() + 2);
        sort(dimensoes.begin() + 2, dimensoes.end());
        if (dimensoes[0] < dimensoes[2] && dimensoes[1] < dimensoes[3]) cout << "S\n";
        else cout << "N\n";
    }

    return 0;
}