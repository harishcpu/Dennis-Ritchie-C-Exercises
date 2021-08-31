#include <stdio.h>

#define MAXLINE 100

int mgetline(char s[], int lim);
int htoi(char s[]);

int main()
{
	int i;

	char line[MAXLINE];

	mgetline(line, MAXLINE);
	i = htoi(line);
	printf("The decimal value of %s is %d\n", line, i);
}

int mgetline(char s[], int lim)
{
	int i, c;
	
	i = 0;
	while (i < lim-1 && (c = getc(stdin)) != EOF && c != '\n') {
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	}
		s[i]= '\0';
	return i;
}

int htoi(char s[])
{
	int hex,inhex;
	int n, i;

	i = 0;

	if (s[i] == '0') {
		++i;
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}
	
	n = 0;
	inhex = 1;
	for (;inhex == 1; ++i) {
		if (s[i] >= '0' && s[i] <= '9')
			hex = s[i] - '0';
		else if (s[i] >= 'A' && s[i] <= 'F')
			hex = s[i] - 'A' + 10;
		else if (s[i] >= 'a' && s[i] <= 'f')
			hex = s[i] - 'a' + 10;
		else
			inhex = 0;

		if (inhex == 1) 
		n = 16 * n + hex;
	}
	return n;
}
