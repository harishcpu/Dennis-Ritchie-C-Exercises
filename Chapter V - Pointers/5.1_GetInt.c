#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 100
#define SIZE 10

int getch(void);
void ungetch(int);

int buf[BUFSIZE];	/* buffer for ungetch */
int bufp = 0;		/* next free position in buf */

int main()
{
	int n, array[SIZE], GetInt(int *);

	for (n = 0; n < SIZE && GetInt(&array[n]) != EOF; n++);

	for (int i = 0; i < n; i++)
	printf("%d ", array[i]);

	putchar('\n');
	return 0;
}

/* GetInt: get next integer from input to *pn */
int GetInt(int *pn)
{
	int c, sign;

	while(isspace(c = getch()));	/* skip white space */

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);	/* it's not a number */
		return 0;
	}

	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}


/*getch: get a (possibly pushed back) character */
int getch(void)	
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}


/* ungetch: push a character back onto the input */
void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many arguments\n");
	else
		buf[bufp++] = c;
}
