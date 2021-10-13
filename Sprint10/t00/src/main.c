#include "../inc/header.h"

int main (int argc, char *argv[]) {
    int fd = 0;
    ssize_t ref;
    char ch;
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return -1;
    }
    
    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        mx_printerr("eerror\n");
        return -1;
    }
    while ((ref = read(fd, & ch, 1)) > 0) {
        write(1, &ch, 1);
        if (ref < 0) {
            mx_printerr("error\n");
            return -1;
        }
    }
    close(fd);
    return 0;
}

