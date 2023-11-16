#include "main.h"
/**
 * compare - compare with quotient to check divisibility
 * @num: the inputed number
 * @quot: the quotient
 *
 * Return: 1 if num is prime
 *         0 if num is not prime
 */

int compare(int num, int quot)
{
	if (num <= 1)
		return (0);
	else if (num % quote == 0)
		return (0);
	return (compare(num, quot + 1));
}

/**
 * is_prime_number - is this a prime number?
 * @n: the inputed number
 *
 * Return: retun value in comapare function above
 */

int is_prime_number(int n)
{
	return (compare(n, 1));
}
