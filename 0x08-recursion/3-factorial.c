#include "main.h"

/**
 * factorial - returns factorial of n
 * @n: interger
 *
 * Return: 1 if n is 0, else if n is equal to 0
 * return -1 else return 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
