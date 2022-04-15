#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: separating sign
 * @n: number int
 *
 * Description: Write a function that prints strings, followed by a new line.
 * Return: 0 for success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}

	}
	va_end(ap);
	printf("\n");
}
