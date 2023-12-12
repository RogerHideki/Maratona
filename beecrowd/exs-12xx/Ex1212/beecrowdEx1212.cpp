#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    while (cin >> n1 >> n2 && !(n1 == 0 && n2 == 0)) {
        int carry, carries;
        carries = carry = 0;
        while ((n1 != 0 && n2 != 0) || carry == 1) {
            if (n1 % 10 + n2 % 10 + carry >= 10) {
                carry = 1;
                carries++;
            }
            else carry = 0;
            n1 /= 10;
            n2 /= 10;
        }

        if (carries == 0) cout << "No carry operation.";
        else if (carries == 1) cout << "1 carry operation.";
        else cout << carries << " carry operations.";
        cout << endl;
    }

    return 0;
}