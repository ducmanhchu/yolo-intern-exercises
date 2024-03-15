#include <iostream>
#include <vector>
std::vector<double> divisionOfArray(std::vector<int> a, std::vector<int> b) {
    std::vector<double> result;
    int i=0, j=0;
    while (i<a.size() && j<b.size()) {
        result.push_back((double)a[i]/b[j]);
        i++;
        j++;
    }
    while (i<a.size()) {
        result.push_back(a[i]);
        i++;
    }
    while (j<b.size()) {
        result.push_back(b[j]);
        j++;
    }
    return result;
}
