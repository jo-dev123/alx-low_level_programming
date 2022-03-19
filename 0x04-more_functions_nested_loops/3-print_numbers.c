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
	int st;

	for (st = 0; st <= 9; ++st)
		_putchar(st + '0');

	_putchar('\n');
}
