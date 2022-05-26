#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer to char
 *
 * Return: void
 */

void rev_string(char *s)
{
	while (*s != '\0')
		s++;
	s = s - 1;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
}
