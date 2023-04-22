#include<iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    while (n--) {
        double c;
        int dias = 0;

        cin >> c;
        while (c > 1) {
            dias++;
            c /= 2;
        }

        cout << dias << " dias" << endl;
    }

    return 0;
}