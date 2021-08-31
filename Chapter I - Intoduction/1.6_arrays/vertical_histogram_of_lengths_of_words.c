#include <stdio.h>

#define MAXWL 20	/* maximum number of characters in a word */
#define MAXNW 25	/* maximum number of words in a sentence */

/* print vertical histogram of the lengths of words */
void main()
{
	int i, j;
	int c, nc, nw;
	int word[MAXNW];

	nc = nw = 0;
	for (i = 0; i <= MAXNW; ++i)
		word[i] = 0;

	while ((c = getc(stdin)) != EOF) {
		++nc;
		if (c == ' ' || c == '\n' || c == '\t') {
			word[nw] = nc - 1;	/* subtracting with 1 for neglecting the white space at the end */
			nc = 0;
			++nw;
		}
	}

	/* print the histogram */
	for (i = MAXWL; i >= 1; --i) {
		for (j = 0; j <= nw; ++j) {
			if (word[j] >= i){
				putc('*', stdout);
				putc(' ', stdout);
				putc(' ', stdout);
				putc(' ', stdout);
			}
			else {
				putc(' ', stdout);
				putc(' ', stdout);
				putc(' ', stdout);
				putc(' ', stdout);
			}
		}
		putc('\n', stdout);
	}
}

