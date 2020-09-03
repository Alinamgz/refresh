void mx_foreach(int *arr, int size, void (*f)(int));
void mx_printint(int n);

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};

    mx_foreach(arr, 5, mx_printint);
    return 0;
}
