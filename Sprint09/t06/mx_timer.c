#include <time.h>

double mx_timer(void (*f)()) {
    clock_t start = clock();
    (*f)();
    clock_t end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC; 
    if (start <= 0 || end <= 0 || end < start) {
        return -1;
    }
    return time;
}

