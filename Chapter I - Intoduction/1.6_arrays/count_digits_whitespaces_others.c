#include <stdio.h>

/* count digits, white space, others */

void main()
{
	int c, nwhite, nother;
	int ndigit[10];
	int i;

	nwhite = nother = 0;
	for (i = 0; i <= 9; ++i)
		ndigit[i] = 0;

	while ((c = getc(stdin)) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}
	printf("Digits : ");
	for(i = 0; i <= 9; ++i)
		printf("%d ",i);
	printf("\n	 ");
	for(i = 0; i <= 9; ++i)
		printf("%d ",ndigit[i]);
	printf("white spaces : %d\tothers : %d\n", nwhite, nother);
}
