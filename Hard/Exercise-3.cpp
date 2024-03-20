#include <iostream>
void combine(int a[], int s1, int b[], int s2, int c[], int s3) {
    int i=0, j=0, index=0;
    while (i<s1 && j<s2) {
        if (a[i]<b[j]) {
            c[index] = a[i];
            i++;
            index++;
        } else {
            c[index] = b[j];
            j++;
            index++;
        }
    }
    while (i<s1) {
        c[index] = a[i];
        i++; index++;
    }
    while (j<s2) {
        c[index] = b[j];
        j++; index++;
    }
}
