#include <stdio.h>

unsigned invert(unsigned x, int p, int n);
int main()
{
	printf("%u\n", invert((unsigned)12, 1, 2));
	int a = invert((unsigned)12, 1, 2);
	for (int i = 7; i>=0; --i)
		printf("%i", (a & (1 << i)) >> i);
	return 0;
}

unsigned invert(unsigned x, int p, int n)
{
	return x ^ (~(~0 << n) << (p+1-n)); 
}
