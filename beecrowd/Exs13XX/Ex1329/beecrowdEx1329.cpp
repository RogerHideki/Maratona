#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n, face;

    cin >> n;
    while (n != 0) {
        vector<int> r(2, 0);
        for (int i = 0; i < n; i++) {
            cin >> face;
            if (face == 0) {
                r[0]++;
            } else {
                r[1]++;
            }
        }

        cout << "Mary won " << r[0] << " times and John won " << r[1] << " times" << endl;

        cin >> n;
    }

    return 0;
}