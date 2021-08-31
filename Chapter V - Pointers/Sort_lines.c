#include <stdio.h>
#include <string.h>

#define MAXLINES 5000		/* max #lines to be sorted */

char *lineptr[MAXLINES];	/* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

/* sort input lines */
int main()
{
	int nlines;

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input is too big to sort\n");
		return 1;
	}
}


#define MAXLEN 1000		/* max length of any input line */

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
	int mGetline(char *, int);
	char *alloc(int);
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = mGetline(line, MAXLEN)) > 0)
		printf("one more\n");
		if (nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0';	/* delete new line */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}
/* mGetline: read the line from stdin */
int mGetline(char *s, int maxlen)
{
	int i = 0;
	while (i < maxlen && (*(s + i) = getchar()) != '\n' && *(s + i++) != EOF);
	if (*(s + i++) == '\n')
		*(s + i) = '\0';
	return i;
}
#define ALLOCSIZE 1000	/* size of available space */
static char allocbuf[ALLOCSIZE];	/* storage for alloc */
static char *allocp = allocbuf;		/* next free popsition */

char *alloc(int n)	/* return pointer to n characters */
{
	if (allocbuf + ALLOCSIZE - allocp >= n) {	/* it fits */
		allocp += n;
		return allocp - n;	/* old p */
	} else		/* not enough room */
		return 0;
}


/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
	while (nlines-- > 0)
		printf("%s\n", *lineptr++);
}



/* qsort: sort v[left]...v[right] into increasing order */
void qsort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right)		/* do nothing if array contains */
		return;			/* fewer than two elements */
	swap(v, left, (right + right) / 2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last);
	qsort(v, last+1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
