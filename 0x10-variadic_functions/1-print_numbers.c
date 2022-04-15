#include "variadic_functions.h"

/**
 * print_numbers - print each int argument
 * @separator: seperates the list of it
 * @n: initial parameter
 *
 * Description: Write a function that prints numbers, followed by a new line.
 * Return: integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	 unsigned int i;
	 int args_value;
	 va_list ap;

	 va_start(ap, n);
	 for (i = 0; i < n; i++)
	 {
		 args_value = va_arg(ap, int);
		 printf("%d", separator);

		 if (i < (n - 1) && (separator != NULL))
			 printf("%s", separator);
	 }
	 printf("\n");
	 va_end(ap);
}
