#include <stdio.h>

#define MAXWL 20	/* maximum number of characters in a word */

/* print the horizontal histogram of lengths of words */
int main(void)
{
	int c, nc, nw;
	int word[MAXWL];
	int i, j;

	nc = nw = 0;

	while ((c = getc(stdin)) != EOF) { 
		++nc;
		if(c == ' ' || c == '\n' || c == '\t') {
			word[nw] = nc - 1;
			nc = 0;
			++nw;
		}
	}

	for (i = 0; i < nw; ++i) {
		for (j = word[i]; j >= 1; --j) {
			putc('*', stdout);
			putc(' ', stdout);

		}
		putc('\n', stdout);
		putc('\n', stdout);
	}
}
