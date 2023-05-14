#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> output(40000);
    int n;

    for (int i = 0; i < 40000; i++) {
        output[i] = i + 2;
    }

    for (int i = 0; i < output.size(); i++) {
        for (int j = output[i] + i; j < output.size(); j += output[i] - 1) output.erase(output.begin() + j);
    }

    while (cin >> n && n != 0) {
        cout << output[n - 1] << endl;
    }

    return 0;
}