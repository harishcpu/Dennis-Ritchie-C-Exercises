#include <stdio.h>

/* print the input as word per line */

void main()
{
	int c;

	while ((c = getc(stdin)) != EOF) {
		if (c == ' ')
			putc('\n', stdout);
		else
			putc (c, stdout);
	}
}
