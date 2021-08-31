#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int get_line(char line[], int maxline);

/* print the longest input line */

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {
	if(len > LIMIT)
		printf("%s",line);
	}
	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;
	
	for(i = 0; i < lim - 1 && (c = getc(stdin)) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') { 
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
