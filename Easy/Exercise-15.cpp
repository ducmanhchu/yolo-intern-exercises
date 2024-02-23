#include <iostream>
long long factorial(int a) {
    if (a==0) return 1;
    return a*factorial(a-1);
}
int main() {
    std::cout << (((5<6) || (4<2)) && (21<20 && 13 < 11)) && false;
    return 0;
}