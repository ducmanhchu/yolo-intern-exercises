#include <iostream>
#include <string>
std::string evenOrOdd(int a, int b) {
    if (a%2==0 && b%2==0) return "both even!";
    else if (a%2!=0 && b%2!=0) return "both odd!";
    else return "1 even and 1 odd!";
}
