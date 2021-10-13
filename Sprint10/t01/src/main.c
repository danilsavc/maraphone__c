#include "../inc/header.h"

int main (int argc, char *argv[]) {
    char sum = 0;
    if (argc != 3)  {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [source_file] [destination_file]\n");
        exit(-1);
    }
    int src =  open(argv[1], O_RDONLY);
    if(src < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        exit(-1);
    }
    int dst = open(argv[2], O_CREAT | O_WRONLY | O_EXCL, S_IRUSR | S_IWUSR);
    while (read(src, &sum, 1)) {
        write(dst, &sum, 1);
    }
    close(src);
    close(dst);
    return 0;
}

