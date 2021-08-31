#include <stdio.h>
#include "colors.h"

#define MAXLINE 1000	/* maximum input line length */

int mGetline(char s[], int limit);
int strrindex(char s[], char t[]);

int main()
{
	char line[MAXLINE];
	int found = 0;
	char pattern[] = "abc";
	int result = 0;

	printf("\n" BOLDRED "Type some lines of text" RESET ": \n");
	while (mGetline(line, MAXLINE) > 0) {
		if (result = strrindex(line, pattern)) {
			printf("\n%s\n", line);
			found++;
		}
	}
	printf("found the right index at index %d\n", result);
	return found;
}
