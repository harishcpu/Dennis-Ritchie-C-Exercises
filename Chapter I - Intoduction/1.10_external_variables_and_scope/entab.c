#include <stdio.h>
/* write a program entab that replaces strings of blanks by the minimum 
    number of tabs and blanks to acheive the same spacing. */

#define TABINC 8 /* tab stop */

int main()
{
	int ntab, nb;
	int c, count;
	
	ntab = nb = 0;
	while((c = getc(stdin)) != EOF) {
			count = 0;
			if (c == ' ') {
				++count;
				while((c = getc(stdin)) == ' ') {
					++count;
				}
				if(count >= TABINC) {
					ntab = count / TABINC;
					nb = count - (ntab * TABINC);
					ntab = ntab * TABINC;		/* for blank visibility */ 
					/* the above line is for printing # for ntab times. you just have to print one TAB instead of ntab #s. */
					while(ntab >= 1) {
						putc('#',stdout); //	printf("#");
						--ntab;
					}
					while(nb >= 1) {
						putc('*', stdout); //	printf("*");
						--nb;
					}
				}
				else {
					while(count > 0) {
						putc('x',stdout);
						--count;
					}
				}
				putc(c,stdout);
			}
			else {
				putc(c,stdout);
			} 	
	}
}
