#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, c, m;

    cin >> n >> c >> m;

    vector<int> raras(c);
    int nRaras = c;

    for (int i = 0; i < c; i++) {
        int x;
        cin >> x;
        raras[i] = x;
    }

    for (int i = 0; i < m; i++) {
        int y;

        cin >> y;

        for (int j = 0; j < raras.size() ; j++) {
            if (y == raras[j]) {
                raras.erase(raras.begin() + j);
                nRaras--;
                break;
            }
        }

        if (raras.size() == 0) {
            break;
        }
    }

    cout << nRaras << endl;


    return 0;
}