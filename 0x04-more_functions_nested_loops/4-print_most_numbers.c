#include "main.h"
/**
 * print_most_numbers - print 0-9, miss 2 & 4
 * @void: no parameter
 *
 * Description: print from 0-9 
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
