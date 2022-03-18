#include "main.h"

/**
 * main- Entry Point
 * @void: no Parameter
 *
 * Description: print the alphabet
 * Return: 0 if True
 */

void print_alphabet(void)
{
	char st = 'a';
	for (st; st <= 'z'; st++)
	{
		_putchar(st);
	}

	_putchar("\n");
}
