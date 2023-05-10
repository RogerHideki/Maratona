#include <iostream>

using namespace std;

int main() {
    int hI, mI, hF, mF, hT = 0, mT;

    cin >> hI >> mI >> hF >> mF;
    mT = mF - mI;
    if (mT < 0) {
        mT += 60;
        hT--;
    }
    hT += hF - hI;
    if (hT < 0 || (hT == 0 && mT == 0)) hT += 24;

    cout << "O JOGO DUROU " << hT << " HORA(S) E " << mT << " MINUTO(S)" << endl;

    return 0;
}