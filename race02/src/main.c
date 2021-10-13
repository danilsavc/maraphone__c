#include "../inc/header.h"

int main(int argc, char const *argv[]) {
    if (argc != 6) {
        mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n");
        exit(0);
    }

    int source = open(argv[1], O_RDONLY);
    if (source < 0) {
        mx_printerr("map does not exist\n");
        exit(0);
    }

    char t_buf[1];
    int n = read (source, t_buf, 4);
    if (n <= 0) {
        mx_printerr("map does not exist\n");
        exit(0);
    }

    int row,column;
    int l;
    int x1 = mx_atoi(argv[2]), x2 = mx_atoi(argv[4]);
    int y1 = mx_atoi(argv[3]), y2 = mx_atoi(argv[5]);

    char *str = mx_file_to_str(argv[1]);
    int **int_mat = mx_mat_int(str, &row, &column);  
    char **ch_mat = mx_mat_char(str, &row, &column);
    int **mat1 = mx_mat_int(str, &row, &column);

    if (x1 >= column || x2 >= column || x1 < 0 || x2 < 0 || y1 < 0 || y2< 0 || y1 >= row || y2 >= row) {
        mx_printerr("points are out of map range\n");
        exit(0);
    }

    int px[row * column], py[row * column];
    if (!lee_alg(int_mat,x1,y1,x2,y2,row,column,&l,px,py)) {
        mx_printerr("route not found\n");
        exit(0);
    }

    int file1 = open("path.txt",O_WRONLY);
    if (file1 < 0) {
        file1 = open("path.txt", O_CREAT | O_WRONLY);
    }
        

    for (int i = 0; i < l ; ++i) {
        ch_mat[py[i]][px[i]] = '*';
    }
            

    ch_mat[y2][x2] = '*';
    max(mat1, x1, y1, row, column, ch_mat);

    for (int i = 0; i < row ; ++i) {
        for (int j = 0; j < column ; ++j) {
            char t_buf = ch_mat[i][j];
            write(file1, &t_buf, 1);
        }
        write(file1, "\n", 1);
    }

    if (close(file1) < 0) {
            mx_printerr("map error\n");
            exit(0);
    }
        
    mx_printstr("dist=");
    mx_printint(max(mat1,x1,y1,row,column,ch_mat));
    mx_printchar('\n');
    mx_printstr("exit=");
    mx_printint(l);
    mx_printchar('\n');
    
    return 0;
}

