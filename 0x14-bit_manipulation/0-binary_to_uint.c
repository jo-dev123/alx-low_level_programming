#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: number converted || 0 if more than one char !0 or !1 ||
 * 0 b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
