#include "../inc/header.h"

int mx_atoi(const char *str) {
	const char* temp;

	while(*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r') {
		str++;
	}

	long long num = 0;
	int digit = (str[0] == '-') ? -1 : 1;

	if (!(str[0] >= '0' && str[0] <= '9') && str[0] != '-' && str[0] != '+') {
		return 0;
	}
	if (str[0] == '-' || str[0] == '+') {
		str++;
	}

	temp = str;

	while(*temp >= '0' && *temp <= '9') {
		num *= 10;
		num += *temp - '0';
		temp++;
	}

	if (*temp != '\0') {
		return 0;
	}
	
	return num * digit;
}

