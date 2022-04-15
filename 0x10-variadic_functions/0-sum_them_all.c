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
	unsigned int sum = 0, i;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
