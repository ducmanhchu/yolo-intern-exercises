#include <iostream>
#include <string>

int sumOfDigits(int n) {
    int ans=0;
    std::string s = std::to_string(n);
    for (int i=0; i<s.length(); i++) {
        int t = s[i] - '0';
        ans+=t;
    }
    return ans;
}
