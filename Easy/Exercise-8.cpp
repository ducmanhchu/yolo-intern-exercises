#include <iostream>
#include <cmath>
bool isPrime(int a) {
    if (a<=1) return false;
    int t=sqrt((double)a);
    for (int i=2; i<t+1; i++) {
        if (a%i==0) return false;
    }
    return true;
}
