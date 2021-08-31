#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len > max) { 
			max = len;
			copy(longest, line);
		}
}
	if(max > 0)
		printf("%s",longest);
}

int get_line(char s[], int lim)
{
	int c, i;
	
	for(i = 0; i < lim - 1; ++i) {
		if((c = getc(stdin)) == '\n')
			break;
		if(c == EOF) 
			break;
		s[i] = c;
		}
	if (c == '\n') { 
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
