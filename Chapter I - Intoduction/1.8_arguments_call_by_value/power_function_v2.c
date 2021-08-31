#include <stdio.h>

double power(int m, int n);

/* test power function */
int main()
{
	int i;
	
	printf("n  2^n   -3^n		where, n <= 10;\n");
	printf("-- ----  ----\n");
	for (i = 1; i <= 10; ++i)
		printf("%-2d %-4.0lf %5.0lf\n", i, power(2, i), power(-3, i));
	return 0;
}

/* power: raise base to n-th power; n >= 0; version 2 */
double power(int base, int n)
{
	int p;
	
	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}

