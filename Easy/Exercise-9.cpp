#include <iostream>
int remainder(int a, int b) {
    if (b==0) throw "Cannot divide by zero";
    int r;
    for (int q=1; b*q<=a; q++) {
        r = a - b*q;
    }
    return r;
}
