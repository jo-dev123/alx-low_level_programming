#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: string length in integer
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	return (1 + _strlen_recursion(s + 1));
}
