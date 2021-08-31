#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("size of a char is %d byte(s)\n",(int) sizeof(char));
	printf("signed chars range from %d to %d\n", -(char)((unsigned char) ~0 >> 1) - 1, (char)((unsigned char) ~0 >> 1));
	printf("Unsigned chars range from 0 to %d\n",(unsigned char) ~0);
	
	printf("\nsize of a short is %d byte(s)\n",(int) sizeof(short));
	printf("signed shorts range from %d to %d\n", -(short)((unsigned short) ~0 >> 1) - 1, (short)((unsigned short) ~0 >> 1));
	printf("Unsigned shorts range from 0 to %d\n",(unsigned short) ~0);
	
	printf("\nsize of an int is %d byte(s)\n",(int) sizeof(int));
	printf("signed ints range from %d to %d\n",-(int)((unsigned int) ~0 >> 1) - 1, (int)((unsigned int) ~0 >> 1));
	printf("Unsigned ints range from 0 to %u\n",(unsigned int) ~0);
	
	printf("\nsize of a long is %d byte(s)\n",(int) sizeof(long));
	printf("signed longs range from %ld to %ld\n", -(long)((unsigned long) ~0 >> 1) - 1, (long)((unsigned long) ~0 >> 1));
	printf("Unsigned longs range from 0 to %lu\n",(unsigned long) ~0);


//	printf("%d",(int)(sizeof(double)));
}

