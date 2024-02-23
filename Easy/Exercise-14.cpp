#include <iostream>
// Tìm vị trí của x trong mảng a
int search(int a[], int s, int x) {
    int l=0, r=s-1;
    while (l<=r) {
        int m = (l+r)/2;
        if (a[m]==x) return m;
        else if (a[m]>x) r=m-1;
        else l=m+1; 
    }
    return -1;
}
