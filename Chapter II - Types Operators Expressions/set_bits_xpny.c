#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
int main()
{
	printf("%u\n", setbits((unsigned)10, 2, 3, (unsigned)12));
	int a = setbits((unsigned)10, 2, 3, (unsigned)12);
	for (int i = 7; i>=0; --i)
		printf("%i", (a & (1 << i)) >> i);
	return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return ((x & ~(~(~0 << n) << (p+1-n))) | ((y & ~(~0 << n)) << (p+1-n)));
}
