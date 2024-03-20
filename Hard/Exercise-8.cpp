#include <iostream>
void countCurrency(int n) {
    int values[9] = {1,2,5,10,20,50,100,200,500};
    int cnt[9] = {0};
    for (int i=8; i>=0; i--) {
        if (n >= values[i]) {
            cnt[i] = n/values[i];
            n %= values[i];
        }
    }
    std::cout << "Currency Count: " << "\n";
    for (int i=0; i<9; i++) {
        std::cout << values[i] << ": " << cnt[i] << "\n";
    }
}
