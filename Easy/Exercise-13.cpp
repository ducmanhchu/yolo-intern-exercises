#include <iostream>
#include <vector>
std::vector<int> reverse(std::vector<int> a) {
    std::vector<int> result;
    for (int i=a.size()-1; i>=0; i--) {
        result.push_back(a[i]);
    }
    return result;
}

