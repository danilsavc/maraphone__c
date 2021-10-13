void mx_arr_rotate(int *arr, int size, int shift) {
    int tem, j, i;
    if (shift < 0) {
        for (i = 0; i > shift; i--) {
            tem = arr[0];
            for (j = 0; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
        }
        arr[j] = tem;
    }
    else {
        for (i = 0; i < shift; i++) {
            tem = arr[size - 1];
            for ( j = size - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            arr[j] = tem;
        }
    }
}

