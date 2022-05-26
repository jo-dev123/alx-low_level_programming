#include "main.h"

/**
 * _puts - prints string
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	for (str = str; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
