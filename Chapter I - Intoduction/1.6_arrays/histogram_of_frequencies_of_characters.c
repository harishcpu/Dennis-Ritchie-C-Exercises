#include <stdio.h>

#define TONOCHAR 128	/* Total number of printable characters in 
			   ASCII table  0-127 */
/* program to print a histogram of frequency of different 
 * characters in input */

void main()
{
	int c;
	int i, j;
	int character[TONOCHAR];

	for (i = 0; i < TONOCHAR; ++i)
		character[i] = 0;

	while ((c = getc(stdin)) != EOF)
		++character[c];

	for(i = 0; i < TONOCHAR; ++i) {
		printf("%3d ",i);
		putc(i,stdout);
		putc(' ',stdout);
		for(j = 0; j < character[i]; ++j) {
			putc('*',stdout);
			putc(' ',stdout);
		}
		putc('\n',stdout);
		putc('\n',stdout);
	}
}
