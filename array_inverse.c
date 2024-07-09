#include <stdio.h>

int main() {

    int myArray[5] = {1, 2, 3, 4, 5};
    myArray[1] = 10;
    myArray[4] = 20;
    for(int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}