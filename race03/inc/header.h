#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include <locale.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
void color(void) ;
void mx_intro();
wchar_t rand_char();
void gen_rain();
void print_rain(const int *arr, int i, int *length, wchar_t rand_ch);
int speed_change(int speed, int ch);

#endif
