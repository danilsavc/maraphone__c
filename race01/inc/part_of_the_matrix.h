#ifndef _PART_OF_THE_MATRIX_H_
#define _PART_OF_THE_MATRIX_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void mx_check_args(char *argv[], char *operand1, char *operation, char *operand2, char *result);
void mx_calculate(char *operand1, char *operation, char *operand2, char *result,
                int operand1_length, int operand2_length, int result_length);

long long mx_atoi(const char* str);
bool mx_isdigit(char c);
bool mx_isspace(char c);
char *mx_itoa(long long number);
double mx_pow(double n, unsigned int pow);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str); 
void mx_print(int i, char *operation, int j, int k);

#endif

