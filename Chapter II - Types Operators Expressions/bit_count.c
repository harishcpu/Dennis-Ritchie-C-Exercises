#include <stdio.h>

int bit_count(int x);

int main()
{
	int n, bits;

	printf("Enter a number : ");
	scanf("%d", &n);

	bits = bit_count(n);
	printf("The number of 1s in %d is %d\n", n, bits);
}

int bit_count(int x)
{
	int b;

	for(b = 0; x != 0; x &= x-1)
		++b;
	return b;
}
