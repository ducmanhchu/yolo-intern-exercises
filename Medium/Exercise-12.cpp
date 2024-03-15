#include <iostream>
#include <ctime>

bool random() {
    return rand()%2;
}
int random(int a) {
    if (random()) return rand()%a;
    else return -(rand()%a);
}

int main() {
    srand(time(0));
    return 0;
}