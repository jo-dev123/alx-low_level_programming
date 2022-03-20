#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: print 1-9 decimal
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
