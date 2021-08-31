#include <stdio.h>

#define MAXLINE 100

int mgetline(char line[], int lim);
void squeeze(char s1[], char s2[]);

int main()
{
	char s1[MAXLINE], s2[MAXLINE];

	printf("Enter the string : ");
	mgetline(s1, MAXLINE);
	printf("Enter the matches to delete : ");
	mgetline(s2, MAXLINE);

	squeeze(s1, s2);
	printf("\nThe string after deleting the matches : ");
	printf("'%s'\n", s1);

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

void squeeze(char s1[], char s2[])
{
	int i, j, k = 0;

	for (i = 0; s1[i] != '\0'; ++i) {
		for (j = 0; s1[i] != s2[j] && s2[j] != '\0'; ++j);
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}
	s1[k] = '\0';
}
