#include <iostream>
int average(int a[], int s) {
    int sum=0;
    for (int i=0; i<s; i++) sum += a[i];
    return (double)sum/s;
}
