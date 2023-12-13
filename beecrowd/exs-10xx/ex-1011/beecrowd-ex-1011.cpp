#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    const double pi = 3.14159;
    double r;

    cin >> r;
    printf("VOLUME = %.3f\n", 4 * pi * r * r * r / 3);

    return 0;
}