#include<iostream>

using namespace std;

int main() {
    int n, a, b;

    cin >> n;
    cin >> a;
    cin >> b;
    if (a + b > n) {
        cout << "Deixa para amanha!";
    } else {
        cout << "Farei hoje!";
    }
    cout << endl;

    return 0;
}