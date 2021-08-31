#include <stdio.h>

#define MAXLINE 100

void mgetline(char s1[], int lim);
void expand(char s1[], char s2[]);

int main()
{
	char s1[MAXLINE], s2[MAXLINE];

	printf("Enter the first and last letters with a - in the middle : ");
	mgetline(s1, MAXLINE);
	expand(s1, s2);
	printf("%s\n", s1);

	printf("%s\n", s2);
	return 0;
}


void mgetline(char s1[], int lim)
{
	int i;
	char c;

	for (i = 0; i < lim-1 && ((c = getc(stdin)) != EOF) && c != '\n'; s1[i] = c, ++i);
	s1[i] = '\0';
}


void expand(char s1[], char s2[]) 
{
	int i, j, c;

	i = j = 0;
	while ((c = s1[i++]) != '\0')
	{
		if (s1[i]=='-' && s1[i+1] >= c)
		{
			++i;
			while (c < s1[i])
				s2[j++] = c++;
		}
		else
			s2[j++] = c;
	}
	s2[j] = '\0';
}
