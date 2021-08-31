#include<stdio.h>

/* copy the input to output, replace each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. */
void main()
{
	int c;

	while ((c = getc(stdin)) != EOF)
		if (c == '\t') {
			putc('\\', stdout);
			putc('t', stdout);
		}
		else if (c == '\b') {
			putc('\\', stdout);
			putc('b', stdout);
		}
		else if (c == '\\') {
			putc('\\', stdout);
			putc('\\', stdout);
		}
		else {
			putc(c, stdout);
		}
}
