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
	int st = 0;

	while (st <= 9)
	{
		_putchar(st);
		++st;
	}

	_putchar('\n');
}
