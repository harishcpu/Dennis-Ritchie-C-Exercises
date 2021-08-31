/* print Fahrenheit - Celsius table */

#include <stdio.h>

void main()
{
	printf("Fahrenheit Celsius\n");
	for(int fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3d\t %6.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32.0)));
	}
}
