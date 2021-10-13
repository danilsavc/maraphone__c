#include "../inc/header.h"

int main(int argc, char *argv[]) 
{
    setlocale(LC_ALL, "ja_JP.UTF-8");
    initscr();
    curs_set(false);
	if(argc == 2)
		if(mx_strlen(argv[1]) == 2 && (argv[1][0]) == '-' && (argv[1][1]) == 's') {
			gen_rain();
            mx_intro();
        }
		else {
			mx_printerr("usage: ./matrix_rain [-s] \n");
            exit(0);
        }
	else if (argc == 1) {
		mx_intro();
		gen_rain();
	}
	else {
        mx_printerr("usage: ./matrix_rain [-s] \n");
        exit(0);
    }

    
  	endwin();  
	return 0;
}

