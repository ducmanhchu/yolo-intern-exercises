#include <iostream>
long long exponent(int a, int b) {
    long long result = 1;
    while (b>0) {
        if (b&1) result *= a;
        a *= a;
        b >>= 1;
    }
    return result;
}
int main() {
    return 0;
}