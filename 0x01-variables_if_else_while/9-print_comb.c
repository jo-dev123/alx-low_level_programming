#include <stdio.h>

/**
 * main - possible combinations
 * @void: no parameter
 *
 * Return: 0 if true
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
