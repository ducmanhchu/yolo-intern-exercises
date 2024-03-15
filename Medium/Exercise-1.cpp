#include <iostream>
#include <string>

void arrange(int a[], int s, std::string criteria) {
    if (criteria=="tang") {
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i=0; i<s-1; i++) {
                if (a[i]>a[i+1]) {
                    std::swap(a[i], a[i+1]);
                    swapped = true;
                }
            }
        }
    } else {
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i=0; i<s-1; i++) {
                if (a[i]<a[i+1]) {
                    std::swap(a[i], a[i+1]);
                    swapped = true;
                }
            }
        }
    }
}
