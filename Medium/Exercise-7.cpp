#include <iostream>
#include <vector>
//Lấy ra mảng con từ chỉ số đầu tới chỉ số cuối
std::vector<int> subArray(std::vector<int> a, int first, int end) {
    std::vector<int> result;
    for (int i=first; i<=end; i++) {
        result.push_back(a[i]);
    }
    return result;
}