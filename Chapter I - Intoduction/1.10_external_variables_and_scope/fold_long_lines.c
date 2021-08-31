#include <stdio.h>

#define MAXWL 1000
#define MAXCOL 50

void printline(int count);
int getblank(int count);
int new_count(int count);

char line[MAXWL];

int main()
{
	int c;
	int count;
	extern char line[MAXWL];

	count = 0;
	while((c = getc(stdin)) != EOF) {
		
		if(c == '\t') 
			c = ' ';

		line[count] = c;
		++count;

		if(count >= MAXCOL) {
			count = getblank(count);
			printline(count);
			count = new_count(count);
		}
		
		if(c == '\n')
			printline(count);
	}
	putc('\n', stdout);
}

void printline(int count)
{
	int pos;
	extern char line[MAXWL];

	pos = count;
	for(int i = 0; i <= count; ++i)
		putc(line[i], stdout);
	pos = 0;
	return pos;
}

int getblank(int pos)
{
	while(line[pos-1] != ' ')
		--pos;
	putc('\n', stdout);
	return pos;
}

int new_count(int pos)
{
	int i, j;
	extern char line[MAXWL];
	
	i = 0;
	for(j = pos; j < MAXCOL; ++j,++i)
		line[i] = line[j];
	return i;
}
