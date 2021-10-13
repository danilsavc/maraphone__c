#include "part_of_the_matrix.h"

void mx_printerr(const char *s) {
    write(STDERR_FILENO, s, mx_strlen(s));
}

