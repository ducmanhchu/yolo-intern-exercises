#include <iostream>
//Hàm tính giai thừa của số nguyên n
int factorial(int n) {
    if (n==1 || n==0) return 1;
    else return n*factorial(n-1);
}
//Hàm trả về số chữ số 0 xuất hiện trong giá trị của n giai thừa
int solve(int n) {
    long fac = factorial(n);
    int cnt=0;
    while (fac!=0) {
        if (fac%10==0) cnt++;
        fac/=10;
    }
    return cnt;
}
