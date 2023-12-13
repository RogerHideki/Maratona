#include <iostream>
#include <bitset>

using namespace std;

int main() {
    string input;

    while (cin >> input) {
        string h, m;

        h = bitset<4> ((input[0] - 48) * 10 + input[1] - 48).to_string();
        m = bitset<6> ((input[3] - 48) * 10 + input[4] - 48).to_string();

        for (int i = 0; i < 4; i++) {
            h[i] = (h[i] == '1' ? 'o': ' ');
        }

        for (int i = 0; i < 6; i++) {
            m[i] = (m[i] == '1' ? 'o': ' ');
        }

        cout << " ____________________________________________" << endl;
        cout << "|                                            |" << endl;
        cout << "|    ____________________________________    |_" << endl;
        cout << "|   |                                    |   |_)" << endl;
        cout << "|   |   8         4         2         1  |   |" << endl;
        cout << "|   |                                    |   |" << endl;
        cout << "|   |   " << h[0] << "         " << h[1] << "         " << h[2] << "         " << h[3] << "  |   |" << endl;
        cout << "|   |                                    |   |" << endl;
        cout << "|   |                                    |   |" << endl;
        cout << "|   |   " << m[0] << "     " << m[1] << "     " << m[2] << "     " << m[3] << "     " << m[4] << "     " << m[5] << "  |   |" << endl;
        cout << "|   |                                    |   |" << endl;
        cout << "|   |   32    16    8     4     2     1  |   |_" << endl;
        cout << "|   |____________________________________|   |_)" << endl;
        cout << "|                                            |" << endl;
        cout << "|____________________________________________|" << endl;
        cout << endl;
    }

    return 0;
}