#include <iostream>
//Hàm tính số fibonacci thứ n
int fibonacciNth(int n) {
    if (n==1 || n==2) return 1;
    else return fibonacciNth(n-1) + fibonacciNth(n-2);
}
//Hàm in ra n số fibonacci
void fibonacciSequences(int n) {
    for (int i=1; i<=n; i++) std::cout << fibonacciNth(i) << " ";
}
