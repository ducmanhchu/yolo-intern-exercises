#include <iostream>
void swap(int &a, int &b, int &c) {
    int t;
    std::cout << "Nhan 1 de doi cho a va b" << "\n";
    std::cout << "Nhan 2 de doi cho a va c" << "\n";
    std::cout << "Nhan so bat ky de doi cho b va c" << "\n";
    std::cin >> t;
    if (t==1) {
        int temp = a;
        a = b;
        b = temp;
    } else if (t==2) {
        int temp = a;
        a = c;
        c = temp;
    } else {
        int temp = b;
        b = c;
        c = temp;
    }
}
