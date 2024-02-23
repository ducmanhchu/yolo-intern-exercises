#include <iostream>
int max(int a[], int s) {
    int maxx = -1E6;
    for (int i=0; i<s; i++) {
        if (a[i]>maxx) maxx=a[i];
    }
    return maxx;
}