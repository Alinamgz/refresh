void mx_sort_arr_int(int *arr, int size) {
    int i;
    int j;
    int temp;

     for (i = 0; i < size; i++) {
         for (j = i+1; j < size; j++) {
             if (arr[i] > arr[j]) {
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
     }
}