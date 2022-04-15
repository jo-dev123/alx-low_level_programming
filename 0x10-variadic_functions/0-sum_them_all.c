#include <stdio.h>
#include <stdarg.h>
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
	unsigned int i;
	double sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(argn, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argn, int);
	}
	va_end(argn);
	return (sum);
}
