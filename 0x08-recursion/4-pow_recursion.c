#include "main.h"
/**
 * _pow_recursion - return valut of @x to pow @y
 * @x: real number
 * @y: power
 *
 * Return: -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));
}
