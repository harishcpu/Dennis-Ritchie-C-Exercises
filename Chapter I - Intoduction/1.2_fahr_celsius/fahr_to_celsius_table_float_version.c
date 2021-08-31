/* print fahrenheit - celsius table 
 * fahr = 0, 20, 40, ..., 300; floating-point version */
#include <stdio.h>

void main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;	
	printf("Fahrenheit Celsius\n");
	while (fahr <= upper) {
		
		celsius = (5.0/9.0) * (fahr - 32);		/* 32 will be automatically converted to a floating-point value since
								   "-" operator contains "fahr" which is a floating point variable.
								   Same goes for "lower" in fahr = lower; and for "upper" in while test */	
		printf("%3.0f \t %6.1f\n", fahr, celsius);	/* 3.0 represents 3 digits with no decimal point and 6.1 represents 6 digits wide 								     with one digit after decimal point. */
		fahr += step;				
	}
}
