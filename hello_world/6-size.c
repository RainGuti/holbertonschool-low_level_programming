#include <stdio.h>
/**
 * main - Prints out sizes of various data types on the computer
 * this program is compiled on
 * Return: 0 if success.
*/
int main(void)
{ printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long));
	printf("%lu\n", sizeof(long long));
	printf("%lu\n", sizeof(float));
	return (0);
}
