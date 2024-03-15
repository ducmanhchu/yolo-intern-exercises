#include <iostream>
#include <string>
std::string slices(std::string str, int s, int e) {
    if (s<0 || s>=str.length() && e<0 || e>=str.length()) throw "Position is invalid";
    std::string ans;
    for (int i=s; i<=e; i++) ans+=str[i];
    return ans;
}
