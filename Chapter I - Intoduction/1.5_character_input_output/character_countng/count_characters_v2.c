#include <stdio.h>

/* count characters in input; 2nd version */
void main()
{
	double nc;

	for(nc = 0; getchar() != EOF; ++nc)	/* CTRL+D gives the EOF input, makes getchar() = EOF, terminates the for loop */
		;
	printf("%.0f\n", nc);			/* press CTRL+D after finishing typing all the characters */
}
