    #include "../inc/header.h"

    void print_rain(const int *arr, int i, int *length, wchar_t rand_ch) {
           
        mvaddch(arr[i] + 1, i, rand_ch | COLOR_PAIR(7));      
        mvaddch(arr[i], i, rand_ch| COLOR_PAIR(3));
        mvaddch(arr[i] - length[i], i, ' ' | COLOR_PAIR(3));
    }

