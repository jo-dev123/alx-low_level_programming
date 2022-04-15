#include "variadic_functions.h"

/**
 * sum_them_all - output the sum of all its parameters.
 * @n: integer
 *
 * Return: 0 if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argn;
	unsigned int sum = 0, i;

	va_start(argn, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argn, int);
	}
	va_end(argn);
	return (sum);
}
