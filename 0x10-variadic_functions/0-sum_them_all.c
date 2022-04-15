#include "variadic_functions.h"

/**
 * sum_them_all - output the sum of all its parameters.
 * @n: integer
 *
 * Return: 0 if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	double sum = 0;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	i = 0;

	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
