#include <stdio.h>
#include "colors.h"

#define MAXLINE 1000	/* maximum input line length */

int mGetline(char s[], int limit);
int strindex(char s[], char t[]);

int main()
{
	char line[MAXLINE];
	int found = 0;
	char pattern[] = "ould";

	printf("\n" BOLDRED "Type some lines of text" RESET ": \n");
	while (mGetline(line, MAXLINE) > 0) {
		if (strindex(line, pattern)) {
			printf("\n%s\n", line);
			found++;
		}
	}
	return found;
}
