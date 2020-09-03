#include <stdio.h>

void mx_sort_arr_int(int *arr, int size);

int main(void) {

    int arr[] = {3, 55, -11, 1, 0, 4, 22};
    int size = 7;

    printf("bfore sort:\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    mx_sort_arr_int(arr, size);

    printf("\n______________\nafter sort:\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
