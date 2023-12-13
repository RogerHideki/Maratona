#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    const double pi = 3.14159;
    double raio;

    cin >> raio;
    printf("A=%.4f\n", pi * raio * raio);

    return 0;
}