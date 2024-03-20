#include <iostream>
//Hàm tính giai thừa của số nguyên n
int factorial(int n) {
    if (n==1 || n==0) return 1;
    else return n*factorial(n-1);
}
//Hàm trả về chữ số cuối cùng khác 0 của n giai thừa
int solve(int n) {
    long fac = factorial(n);
    while (fac%10==0) {
        fac /= 10;
    }
    return fac%=10;
}
