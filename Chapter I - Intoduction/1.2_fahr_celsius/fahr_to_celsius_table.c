/* print temparature - fahrenheit to celsius table 
 * fahr = 0, 20, 40, ..., 300. */

#include <stdio.h>

void main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;		//lower limit of temparature table
	upper = 300;		//upper limit 
	step = 20;		//step size
	
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		fahr += step;
		printf("%3d\t%6d\n",fahr,celsius);	/* 3 and 6 are widths to augment %d, 
							   the numbers printed will be right justified in their fields. */
	}
}
