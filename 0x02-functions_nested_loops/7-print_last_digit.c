#include "main.h"

/**
 * print_last_digit - print last number
 * @last: parameter int
 *
 * Return: last
 */

int print_last_digit(int last)
{
	if (last > 0)
	{
		last = last % 10;
		_putchar(last + '0');
	}
	else
	{
		last = last % 10 * -1;
		_putchar(last + '0');
	}
	return (last);
}
