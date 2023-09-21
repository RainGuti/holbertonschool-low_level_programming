#include <stdio.h>
/**
 * main - Prints out sizes of various data types on the computer
 * this program is compiled on
 * Return: 0 if success.
*/
int main(void)
{	int a;
	long int b;
	long long ll;
	char c;
	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long: %lu byte(s)\n", (unsigned long)sizeof(ll));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
