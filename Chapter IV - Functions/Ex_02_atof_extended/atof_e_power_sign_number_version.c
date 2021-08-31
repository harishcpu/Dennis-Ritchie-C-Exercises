#include <stdlib.h>
#include <ctype.h>

/*atof: convert string s to double */
double myAtof(char s[])
{
	double val, power, exponent;
	int i, sign;

	for (i = 0; isspace(s[i]); i++)		//skip white space
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = val * 10.0 + (s[i] - '0');
	if (s[i] == '.')			//skip decimal point
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
//	return sign * val / power;
		
	if (s[i] == 'e' || s[i] == 'E') {		//skip 'e' or 'E' exponent sign
		val = val / power;
		i++;
		if (s[i++] == '-' && isdigit(s[i])) {
			exponent = atoi(&s[i]);
			for (int j = 0; j < exponent; j++)
				val /= 10;
		} else if (s[i] == '+' && isdigit(s[i])) {
			exponent = atoi(&s[i]);
			for (int j = 0; j < exponent; j++)
				val *= 10;
		}
		return val;
	}
	return sign * val / power;
}
