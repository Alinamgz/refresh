#include <stdlib.h>

char *mx_strnew(const int size) {
    int i;
    char *result = NULL;

    result = (char*)malloc(size + 1);
    if (size < 0 || result == NULL) {
        return NULL;
    }

    for (i = 0; i <= size; i++) {
        result[i] = '\0';
    }

    return result;
}
