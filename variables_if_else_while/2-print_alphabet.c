#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabet in lowercase.
 *
 * Return: 0 on success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
