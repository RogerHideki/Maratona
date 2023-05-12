#include <iostream>

using namespace std;

int main() {
    int n, m;
    string acao;

    cin >> n >> m;
    while (m--) {
        cin >> acao;
        (acao == "fechou" ? n++ : n--);
    }
    cout << n << endl;

    return 0;
}