#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char mx_strcpy(char *dst, const char *src);

char * mx_strdup(const char *str) {
    char *result = NULL;
    int len;

    len = mx_strlen(str);
    result = mx_strnew(len);

    mx_strcpy(result, str);

    return result;
}
