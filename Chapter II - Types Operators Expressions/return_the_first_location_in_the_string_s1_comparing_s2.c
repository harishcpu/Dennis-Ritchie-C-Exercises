#include <stdio.h>

#define MAXLINE 100

int mgetline(char line[], int lim);
void any(char s1[], char s2[]);

int main()
{
	char s1[MAXLINE], s2[MAXLINE];

	printf("Enter the string : ");
	mgetline(s1, MAXLINE);
	printf("Enter the matches to find : ");
	mgetline(s2, MAXLINE);

	any(s1, s2);

	return 0;
}

int mgetline(char s[], int lim)
{
	int c, i = 0;

	while (i < lim-1 && (c = getc(stdin)) != EOF && c != '\n') {
		s[i] = c;
		++i;
	}
	if (c == '\n')
		s[i] = '\0';
	return i;
}

void any(char s1[], char s2[])
{
	int i, j;
	int count, location;

	count = 0;
	printf("\nMatch : Location\n");
	for (i = 0; s1[i] != '\0'; ++i) {
		for (j = 0; s1[i] == s2[j] && s2[j] != '\0'; ++j) {
			printf("    %c : %d\n", s1[i], i+1);
			++count;
		}
	}
	if (count == 0)
		printf("      -1\nNo Matches Found\n");
}
