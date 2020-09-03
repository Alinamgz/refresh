#include <stdio.h>
#include <string.h>

//char *mx_strcpy(char *dst, const char *src);

int main(void) {
    const char *src = "Kukusiki sho kak?\n";
    char dst[19] = "ama tutta";

//    mx_strcpy(dst, src);
    strcpy(dst, src);
    printf("src: %s\ndst: %s\n", src, dst);
    return 0;
}
