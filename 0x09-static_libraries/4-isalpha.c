#include "main.h"

/**
 * _isalpha - check for alphabetic char
 * @c: character parameter
 *
 * Return: c
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 95 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
