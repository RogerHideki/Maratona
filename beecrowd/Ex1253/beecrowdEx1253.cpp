#include <iostream>

using namespace std;

int main () {
    int n;

    cin >> n;
    while (n--) {
        string sentenca;
        int deslocamento;

        cin >> sentenca >> deslocamento;
        int size = sentenca.size();

        for (int i = 0; i < size; i++) {
            int ascii = sentenca[i] - deslocamento;
            if (ascii < 65) {
                ascii += 26;
            }
            cout << (char) ascii;
        }
        cout << endl;
    }

    return 0;
}