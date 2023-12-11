#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<char> columns = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    string position;
    char column;
    int row;
    while (t--) {
        cin >> position;
        column = position[0];
        row = position[1] - '0';
        for (int i = 0; i < 8; i++) {
            if (i != (column - 'a')) cout << columns[i] << row << '\n';
        }
        for (int i = 1; i <= 8; i++) {
            if (i != row) cout << column << i << '\n';
        }
    }
    return 0;
}
