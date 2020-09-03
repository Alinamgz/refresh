#include <stdio.h>

int mx_sqrt(int x);

int main(void) {

    int result = mx_sqrt(100);
//    int result = mx_sqrt(4);
//    int result = mx_sqrt(2147483647);
    printf("result: %d", result);
    return 0;
}
