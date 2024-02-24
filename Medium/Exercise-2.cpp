#include <iostream>
#include <vector>
// Hợp nhất 2 mảng số a và b thành mảng c sắp xếp theo thứ tự tăng dần
std::vector<int> combine(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int i=0, j=0;
    while (i<a.size() && j<b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
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

