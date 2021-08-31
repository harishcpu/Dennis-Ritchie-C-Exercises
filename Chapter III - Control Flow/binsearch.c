#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
	int v[] = {2, 4, 6, 7, 9, 29, 45, 46, 49, 50, 51};

	printf("%d", binsearch(6, v, 10));

	return 0;
}
	
	
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;

	mid = (low + high) / 2;
	while ( low <= high && x != v[mid]) {
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low + high) / 2;
	}

	if (x == v[mid])
		return mid;
	else
		return -1;
}
