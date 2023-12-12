#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, x;
    vector<int> numero, quantidade;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i == 0) {
            numero.push_back(x);
            quantidade.push_back(1);
        } else {
            for (int j = 0; j < numero.size(); j++) {
                if (x == numero[j]) {
                    quantidade[j]++;
                    break;
                }
                if (x < numero[j]) {
                    numero.insert(numero.begin() + j, x);
                    quantidade.insert(quantidade.begin() + j, 1);
                    break;
                }
                if (j == numero.size() - 1) {
                    numero.push_back(x);
                    quantidade.push_back(1);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < numero.size(); i++) {
        cout << numero[i] << " aparece " << quantidade[i] << " vez(es)" << "\n";
    }
    return 0;
}