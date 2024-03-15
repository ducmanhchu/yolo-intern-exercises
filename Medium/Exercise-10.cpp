#include <iostream>
#include <algorithm>
//Hàm kiểm tra xem số nguyên x có tồn tại trong mảng a hay không
bool check(int a[], int s, int x) {
    int l=0, r=s-1, m;
    std::sort(a, a+s);
    while (l<=r) {
        m = (l+r)/2;
        if (a[m]==x) return true;
        else if (a[m]<x) l=m+1;
        else r=m-1;
    }
    return false;
}
//Hàm tìm tổng số phần tử của mảng a không tồn tại trong mảng b
int numberOfDigits2(int a[], int s1, int b[], int s2) {
    int cnt=0;
    for (int i=0; i<s1; i++) {
        if (!check(b, s2, a[i])) cnt++;
    }
    return cnt;
}
