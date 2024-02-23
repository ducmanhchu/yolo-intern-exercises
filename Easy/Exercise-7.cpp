#include <iostream>
int sumOfOddDigit(int a[], int s) {
    int result=0;
    for (int i=0; i<s; i++) {
        if (a[i]%2!=0) result+=a[i];
    }
    return result;
}