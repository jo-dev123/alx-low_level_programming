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

	for (part = 0; part <= 9; part++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (child = 1; child <= 9; child++)
		{
			mul = part * child;
			if((mul / 10) > 0);
			{
				_putchar((mul / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar ((d % 10) + '0');

			if (child < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
