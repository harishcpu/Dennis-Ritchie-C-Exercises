#include <stdio.h>

int to_lower(char c);

int main()
{
	char c;

	printf("Enter any string in upper case : ");
	while ((c = getc(stdin)) != EOF)
		putc(to_lower(c), stdout);
}

int to_lower(char c)
{
	return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
