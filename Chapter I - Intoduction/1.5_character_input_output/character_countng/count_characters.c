#include <stdio.h>

/* count characters in input; 1st version */

void main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF) {
		printf("%ld\n",nc); 
		++nc;
	}
}
