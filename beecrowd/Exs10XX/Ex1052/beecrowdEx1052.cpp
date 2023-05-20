#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> meses = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                            "October", "November", "December"};

    cin >> n;
    cout << meses[n - 1] << endl;

    return 0;
}