#include <iostream>
#include <string>
std::string slices2(std::string str, int s, int n) {
    if (s<0 || s>=str.length() && n<0 || (n+s+1)>str.length()) throw "Position is invalid!";
    std::string ans;
    for (int i=s; i<=s+n; i++) ans+=str[i];
    return ans;
}
