#include <stdio.h>

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

void afree(char *p)	/* free storage pointed to by p */
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

/*int main()
{
	char *ptr1, *ptr2;

	ptr1 = alloc(10);

	if (ptr1 != NULL)
		printf("(alloc) Memory is allocated ptr1 = %p\n", ptr1);
	else
		printf("(alloc) Storage is not available\n");
	
	ptr2 = alloc(20);
	if (ptr2 != NULL)
		printf("(alloc) Memory is allocated ptr2 = %p\n", ptr2);
	else
		printf("(alloc) Storage is not available\n");
	afree(ptr2);
	printf("(afree) allocp : %p\n", allocp);
	afree(ptr1);
	printf("(afree) allocp : %p\n", allocp);
	
	return 0;
}
*/
