#include "main.h"
/**
 *_sqrt_recursion - returns the natural square of num
 *@n: natual number
 *
 * Return: n if succesful else -1
 */

int _sqrt_recursion(int n)
{
	return (equal_by_sqr(n, 1));
}


/**
 *equal_by_sqr - returns the natural square of num
 *@n: natual number
 *@equal: act as base
 *
 * Return: n if succesful else -1
 */

int equal_by_sqr(int n, int equal)
{
	if (equal * equal == n)
		return (equal);
	else if (equal * equal > n)
		return (-1);
	equal_by_sqr(n, equal + 1);
}
