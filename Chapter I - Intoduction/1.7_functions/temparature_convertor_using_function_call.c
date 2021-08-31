#include <stdio.h>

/* Temparature conversion, floating point, symbolic constants, functions */

#define LOWER 0
#define UPPER 300
#define STEP 20

void fahr_celsius(void);
void celsius_fahr(void);

int main(void)
{
	int option;

	printf("This prints the temparature Conversion Table\n");
	printf("Choose one of the following options.\n");
	printf("1 Fahrenheit - Celsius conversion\n");
	printf("2 Celsius - Fahrenheit Conversion\n");

	option = getc(stdin);

	if(option == '1')
		fahr_celsius();
	else if(option == '2')
		celsius_fahr();
	else
		printf("INVALID CHOICE\n");
}

void fahr_celsius(void)
{
	printf("Fahrenheit Celsius\n");
	for(int fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%-3d  \t  %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}

void celsius_fahr(void)
{
	printf("Celsius Fahrenheit\n");
	for(int celsius = LOWER; celsius <= UPPER; celsius += STEP)
		printf("%-3d  \t  %6.1f\n", celsius, ((9.0*celsius)/5.0)+32.0);
}
