#include <stdio.h>

#define TABINC 8	/* number of spaces for one TAB hit */
#define MAXLINE 1000	/* maximum number of characters in an array */

int main()
{
	int i, c;
	int pos, nb;
	
	pos = 0;
	while ((c = getc(stdin)) != EOF) {
		while (c != '\n') {
			if(c != '\t') {
				putc(c, stdout);
				++pos;
			}
			else if(c == '\t') {
				nb = TABINC -(pos % TABINC);
				while (nb > 0) {
					putc('#', stdout);
					--nb;
					++pos;
				}
			}
			break;
		}
	}
	return 0;
}

