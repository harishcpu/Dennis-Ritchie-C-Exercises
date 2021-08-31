#include <stdio.h>

#define MAXLINE 1000

int get_line(void);
void copy(void);

char line[MAXLINE];
char longest[MAXLINE];

int main()
{
	int i, len, max;
	extern char longest[MAXLINE];

	max = 0;
	while((len = get_line()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	printf("%s", longest);
	return 0;
}

int get_line()
{
	int c, i;
	extern char line[MAXLINE];

	for(i = 0;
	i < MAXLINE && (c = getc(stdin)) != EOF && c != '\n'; ++i )
		line[i] = c;
	if(c == '\n') {
		line[i] = '\n';
		++i;
	}
	c = '\0';
	return i;
}

void copy()
{
	int i;
	extern char line[MAXLINE], longest[MAXLINE];

	i = 0;
	while((longest[i] = line[i]) != '\0')
		++i;
}

