#include <iostream>
void combine(int a[], int s1, int b[], int s2, int c[], int s3) {
    int i=s1-1, j=s2-1, index=0;
    while (i>=0 && j>=0) {
        if (a[i]<b[j]) {
            c[index] = a[i];
            i--;
            index++;
        } else {
            c[index] = b[j];
            j--;
            index++;
        }
    }
    while (i>=0) {
        c[index] = a[i];
        i--; index++;
    }
    while (j>=0) {
        c[index] = b[j];
        j--; index++;
    }
}
