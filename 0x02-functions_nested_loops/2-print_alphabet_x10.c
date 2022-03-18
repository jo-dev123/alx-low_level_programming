#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * @void: no parameter
 *
 * Description: a-z 10x
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	char fl;
	char i;

	for (i = 1; i <= 10; i++)
	{
		for (fl = 'a'; fl <= 'z'; fl++)
		{
			_putchar(fl);
		}
		_putchar("\n");
	}
}
