#include <iostream>
double taxes(double a[], int s) {
    double fees = 0;
    for (int i=0; i<s; i++) {
        if (a[i]>50000000) fees += a[i]*0.2;
        else if (a[i]>=20000000) fees += a[i]*0.1;
        else fees += a[i]*0.05;
    }
    return fees;
}
