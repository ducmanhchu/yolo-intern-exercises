#include <iostream>
#include <string>
void reverse(std::string a[], int s) {
    for (int i=0; i<s; i++) {
        std::string temp="";
        for (int j=a[i].length()-1; j>=0; j--) {
            temp+=a[i][j];
        }
        a[i] = temp;
    }
}
