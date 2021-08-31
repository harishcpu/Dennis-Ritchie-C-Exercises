#include <stdio.h>

/* copy the input to output, replacing each string of one or more blanks by a single blank */

void main()
{
	int c, nextc;

	while ((c = getc(stdin)) != EOF) {
		if (c == ' '){
			while ((nextc = getc(stdin)) == ' ')
				;
			putc(c, stdout);
			putc(nextc, stdout);
		}
		else {
		putc(c, stdout);
		}
	}
}
