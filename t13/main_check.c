#include <stdio.h>

int mx_bubble_sort(char **arr, int size);

int main(void) {
    char *arr_1[4] = {"abc", "xyz", "ghi", "def"};
    char *arr_2[3] = {"abc", "acb", "a"};

    int res_1 = mx_bubble_sort(arr_1, 4);
    int res_2 = mx_bubble_sort(arr_2, 3);

    printf("\n-------------\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\t", arr_1[i]);
    }
    printf("\n-------------\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\t", arr_2[i]);
    }

    printf("\n\nres_1 = %d;\nres_2 = %d;\n", res_1, res_2);
    return 0;
}
