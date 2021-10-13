#include "../inc/header.h"

void mx_intro()
{
    color();
    initscr();
    char *t1 = "Wake up , Neo..";
    char *t2 = "The Matrix has you..";
    char *t3 = "Follow the white rabbit";
    char *t4 = "Knock, knock, Neo";
    refresh(); 
        nodelay(stdscr,TRUE);
        noecho();
        char ch = getch();
        if (ch == 'q') 
        {
			clear();
		}
    for(int i = 0; i < mx_strlen(t1); i++){        
        mvaddch(5, i + 4, t1[i] | COLOR_PAIR(3));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    for(int i = 0; i < mx_strlen(t2); i++){
        mvaddch(5, i + 4, t2[i] | COLOR_PAIR(4));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    for(int i = 0; i < mx_strlen(t3); i++){      
        mvaddch(5, i + 4, t3[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
    refresh();
    for(int i = 0; i < mx_strlen(t4); i++){      
        mvaddch(5, i + 4, t4[i] | COLOR_PAIR(6));
        refresh();
        usleep(100000);
    }
    usleep(200000);

    clear();
    refresh();
}

