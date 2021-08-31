#include <stdio.h>

/* count new-lines in input */

void main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if(c == '\n')		/* use '\t' to count TABS ' ' to count blanks */
			++nl;
	printf("%d\n", nl);
}
