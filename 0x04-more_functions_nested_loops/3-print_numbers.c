#include "main.h"
/**
 * print_numbers - Printing 0-9
 * @void: no parameter
 *
 * Description: Print int from 0-9 then a newline
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
