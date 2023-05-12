#include <iostream>
#include <vector>

using namespace std;

int main() {
    int porcao, mandioca = 225;
    vector<int> v = {300, 1500, 600, 1000, 150};

    for (int i = 0; i < 5; i++) {
        cin >> porcao;
        mandioca += (porcao * v[i]);
    }
    cout << mandioca << endl;

    return 0;
}