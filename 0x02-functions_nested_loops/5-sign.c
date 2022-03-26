#include "main.h"

/**
 * print_sign - print signs depend on n
 * @n: int parameter
 *
 * Return: a sign + || -
 */

int print_sign(int n)
{
	int i = 1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar(-i);
		return (-1);
	}
}
