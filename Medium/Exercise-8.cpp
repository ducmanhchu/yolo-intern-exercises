#include <iostream>
#include <string>
//Hàm trả về vị trí (chỉ số) đầu tiên xuất hiện chuỗi con a trong chuỗi b nếu không tồn tại thì trả về -1
int subString(std::string a, std::string b) {
    std::string check="";
    for (int i=0; i<=b.length()-a.length(); i++) {
        for (int j=i; j<i+a.length(); j++) {
            check += b[j];
        }
        if (check==a) return i;
        check="";
    }
    return -1;
}
