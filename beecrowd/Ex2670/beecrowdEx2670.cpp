#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> nPessoas(3);
    int menor;

    for (int i; i < 3; i++) {
        cin >> nPessoas[i];
    }

    menor = nPessoas[1] * 2 + nPessoas[2] * 4;
    if ((nPessoas[0] * 2 + nPessoas[2] * 2) < menor) {
        menor = nPessoas[0] * 2 + nPessoas[2] * 2;
    }
    if ((nPessoas[0] * 4 + nPessoas[1] * 2) < menor) {
        menor = (nPessoas[0] * 4 + nPessoas[1] * 2);
    }

    cout << menor << endl;

    return 0;
}