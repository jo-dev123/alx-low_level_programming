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
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
