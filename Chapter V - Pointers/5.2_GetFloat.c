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
	int n, GetFloat(float *);
	float array[SIZE];

	for (n = 0; n < SIZE && GetFloat(&array[n]) != EOF; n++);

	for (int i = 0; i < n; i++)
	printf("%g ", array[i]);

	putchar('\n');
	return 0;
}

/* GetInt: get next integer from input to *pn */
int GetFloat(float *pn)
{
	int c, sign;
	float power;

	while(isspace(c = getch()));	/* skip white space */

	if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
		ungetch(c);	/* it's not a number */
		return 0;
	}

	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0.0; isdigit(c); c = getch())	
		*pn = 10.0 * *pn + (c - '0');	/* collect integer part */
	if (c == '.')
		c = getch();
	for (power = 1.0; isdigit(c); c = getch()) {
		*pn = 10 * *pn + (c - '0');	/* collect the float part */
		power *= 10.0;
	}
	*pn *= sign / power;

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
