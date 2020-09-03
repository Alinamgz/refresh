#include <stdio.h>
#include <stdlib.h>


char *mx_strdup(const char *str);

int main(void) {
    char *src = "Kukusiki sho tam 0.0...?";
    char *rslt = mx_strdup(src);

    printf("src: %s\ndst: %s\n", src, rslt);

    system("leaks -q a.out");
    return 0;
}
