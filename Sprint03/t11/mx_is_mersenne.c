#include <stdbool.h>

bool mx_is_prime(int num);

double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n){
	int count = 0;
	while (++count)
	{
		if (mx_pow(2, count) - 1 == n)
			return mx_is_prime(n);
		else if (mx_pow(2, count) - 1 > n)
			return false;
	}
	return false;
}
