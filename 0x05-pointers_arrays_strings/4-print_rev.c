#include "main.h"

/**
 * print_rev - print reverse of a string
 * @s: pointer to string
 *
 * Return:void
 */

void print_rev(char *s)
{
	for (s = s; *s != '\0'; s++)
	{
		;
	}

	s = (s - 1);

	for (s = s; *s != '\0'; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
