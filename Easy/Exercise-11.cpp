#include <iostream>
int min(int a[], int s) {
    int minn = 1E6;
    for (int i=0; i<s; i++) {
        if (a[i]<minn) minn=a[i];
    }
    return minn;
}