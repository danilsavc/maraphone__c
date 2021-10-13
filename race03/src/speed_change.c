#include "../inc/header.h"

int speed_change(int speed, int ch) {
    switch (ch) {
        case '+':
            if (speed > 10) {
                speed -= 10;
            }
            break;
        case '-':
            if (speed < 150) {
                speed += 10;
            }
            break;
    }
    return(speed);  
}

