#include <iostream>
#include <cstdlib>

int random() {return rand()%2;}
int randomRange(int a, int b) {return rand()%(b-a+1)+a;}

int main() {
    srand(time(0));
    return 0;
}