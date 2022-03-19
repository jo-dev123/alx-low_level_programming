#include "main.h"

/**
 * _isdigit - custom function
 * @c: integer
 *
 * Description: finding an integer 0-9
 * Return: 0 if successful
 */

int _digit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
