#include <iostream>
#include <string>
int countSubString(std::string a, std::string b) {
    int cnt = 0;
    for (int i=0; i<=b.length()-a.length(); i++) {
        bool check = true;
        for (int j=0; j<a.length(); j++) {
            if (b[i+j]!=a[j]) {
                check = false;
                break;
            }
        }
        if (check) cnt++;
    }
    return cnt;
}
