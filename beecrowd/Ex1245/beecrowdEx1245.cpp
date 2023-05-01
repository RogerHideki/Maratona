#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, tamanho;
    char pe;

    while (cin >> n) {
        vector<int> v(62, 0);
        int pares = 0;
        for (int i = 0; i < n; i++) {
            cin >> tamanho >> pe;
            if (pe == 'E') v[tamanho - 30]++;
            else v[tamanho + 1]++;
        }

        for (int i = 0; i <= 31; i++) {
            while (v[i] > 0 && v[i + 31] > 0) {
                v[i]--;
                v[i + 31]--;
                pares++;
            }
        }

        cout << pares << endl;
    }

    return 0;
}