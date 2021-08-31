#include <stdio.h>

#define MAXLINE 100

void escape (char new[], char line[]);

int main()
{
	int i;
	char c;
	char line[MAXLINE], new[MAXLINE];

	i = 0;
	while ( i < MAXLINE && (c = getc(stdin)) != EOF ) {
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	escape(new, line);
	printf("%s\n",new);
}
