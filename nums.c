// chp1/nums.c
#include <stdio.h>
#include<limits.h>//최대값/최소값 볼때

int main(void) {
	//char
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);
	printf("MIn: %d\n", CHAR_MIN);

	
//
signed short int sshort = 1234;
printf("\nsigned short int:\n");
printf("Value: %d\n", sshort);
printf("Max: %d\n", SHRT_MAX);
printf("MIn: %d\n", SHRT_MIN);

//
unsigned short int ushort = 1234U;
printf("\nunsigned short int:\n");
printf("Value: %d\n", ushort);
printf("Max: %d\n", USHRT_MAX);
printf("MIn: %d\n", 0);

//signed int
signed int sint = 12345;
printf("\nsigned short int:\n");
printf("Value: %d\n", sint);
printf("Max: %d\n", INT_MAX);
printf("MIn: %d\n", INT_MIN);

//unsigned int
unsigned int uint = 12345U;
printf("\nunsigned short int:\n");
printf("Value: %u\n", uint);
printf("Max: %u\n", UINT_MAX);

//signed long int
signed long int slong = 123456789L;
printf("\nsigned long int:\n");
printf("Value: %ld\n", slong);
printf("Max: %ld\n", LONG_MAX);
printf("MIn: %ld\n", LONG_MIN);

//unsigned long int
unsigned long int ulong = 123456789UL;
printf("\nunsigned long int:\n");
printf("Value: %lu\n", ulong);
printf("Max: %lu\n", ULONG_MAX);



return 0;
}