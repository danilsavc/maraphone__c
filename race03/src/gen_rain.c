#include "../inc/header.h"

void gen_rain() {
    color();
    int max_y = 0, max_x = 0;    
    getmaxyx(stdscr, max_y, max_x);
    int start[max_x];
    int length[max_x];
    int arr[max_x];

    for (int i = 0; i < max_x; i++) {
        start[i] = -1 * (rand() % 80);
        arr[i] = start[i];
        length[i] = rand() % 50  - 1;
    }

    int speed = 100;
    while (1) {
        for (int i = 0; i < max_x; i++) {       
            wchar_t rand_ch = (rand() % 93 + 33);
            if (i % 2 == 0) {
                rand_ch = ' ';
            }

            print_rain(arr, i, length, rand_ch);

            if (arr[i] - length[i] > max_y) {
                arr[i] = start[i];
            }
            arr[i]++;
        }
        usleep(1000 * speed);

        nodelay(stdscr,TRUE);
        noecho();
        char ch = getch();
        if (ch != 'q') {
            speed = speed_change(speed, ch);
        }
        else {
			clear();
			break;
		}
        refresh();
    }
}
