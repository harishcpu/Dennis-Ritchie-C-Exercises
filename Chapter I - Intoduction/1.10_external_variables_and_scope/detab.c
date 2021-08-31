#include <stdio.h>

#define TABINC 8	/* number of spaces for one TAB hit */
#define MAXLINE 1000	/* maximum number of characters in an array */

void detab(char characters[], int characters_count);

int main()
{
	int i, c;
	int pos;
	char line[MAXLINE];
	
	pos = 1;
	while ((c = getc(stdin)) != '\n') {
		if(c != '\t') {
			line[i] = c;
			++pos;
		}
		else if(c == '\t')
			detab(line, pos);
	}
	line[pos] = '\0';
	printf("%s", line);
	return 0;
}

void detab(char add_tab[], int incpos)
{
	int nb;

	nb = TABINC - ((incpos-1) % TABINC);
	while(nb >= 1) {
		add_tab[incpos] = '#';
		++incpos;
	}
}
