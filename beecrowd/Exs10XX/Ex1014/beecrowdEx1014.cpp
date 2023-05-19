#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int x;
    double y;

    cin >> x >> y;
    printf("%.3f km/l\n", x / y);

    return 0;
}