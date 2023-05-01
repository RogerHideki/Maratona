#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    unsigned int valor;
    map<int, int> mPar;
    vector<int> mImpar;

    cin >> n;
    while (n--) {
        cin >> valor;
        if (valor % 2 == 0) mPar[valor]++;
        else mImpar.push_back(valor);
    }

    for(auto it: mPar) while (it.second--) cout << it.first << endl;
    sort(mImpar.begin(), mImpar.end());
    for(int i = mImpar.size() - 1; i >= 0; i--) cout << mImpar[i] << endl;

    return 0;
}