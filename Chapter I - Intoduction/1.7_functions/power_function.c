#include <stdio.h>

double power(int m, int n);

/* test power function */
int main()
{
	int i;

	for (i = 1; i <= 10; ++i)
		printf("%-2d %-4.0lf %-5.0lf\n", i, power(2, i), power(-3, i));
	return 0;
}

/* power: raise base to n-th power; n >= 0 */
double power(int base, int n)
{
	int i, p;
	p = 1;
	
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}

