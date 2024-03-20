#include <iostream>
void mix(int a[], int s) {
    for (int i=0; i<s-1; i++) {
        std::swap(a[i], a[i+1]);
    }
}

