#include "main.h"

/**
 * times_table - 0 - 9 timestable
 * @void: no parameter
 *
 * Return: void
 */

void times_table(void)
{
	int part, child, mul;

	for (part = 0; part < 10; part++)
	{
		for (child = 0; child < 10; child++)
		{
			mul = part * child;
			_putchar(mul);
			_putchar(',');
		}
	}
}
