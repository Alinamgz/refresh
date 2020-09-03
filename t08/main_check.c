#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int main(void) {
    int result = mx_strcmp("\0", "Kuku");
    printf("result: %d", result);
    return 0;
}
