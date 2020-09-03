#include <stdio.h>

int mx_binary_search(char **arr, int size, const char *s, int *count);

int main(void) {
    int cnt = 0;
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int result = mx_binary_search(arr, 6, "aBz", &cnt);

    printf("index: %d,\ncount; %d\n", result, cnt);
    return 0;
}
