#include <stdio.h>

#define MAXLINE 1000

void reverse_line(char input_array[], char output_array[], int subscript_address);

/* program to reverse input strings */
int main()
{
	int c, i;
	char line[MAXLINE];
	char reversed_line[MAXLINE];
	
	for (i = 0; i < MAXLINE && (c = getc(stdin)) != EOF && c != '\n'; ++i)
		line[i] = c; 
	if(c == '\n') {
		line[i] = '\n';
		++i;
	}
	c = '\0';
	reverse_line(reversed_line, line, i);
	printf("%s", reversed_line);
	putc('\n', stdout);
	return 0;
}

void reverse_line(char to[], char from[], int address)
{
	int i;

	i = 0;
	while((to[i] = from[address-1]) != from[0]) {
		--address;
		++i;
	}
	++i;
	to[i] = '\0';
}
