int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size) {
    int i;
    int step;
    int result = 0;
    char *temp = 0;

    for (step = 0; step < (size - 1); step++) {
        for (i = 0; i < (size - 1 - step); i++) {
            if ((mx_strcmp(arr[i], arr[ i+ 1])) > 0) {
                result++;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    return result;
}
