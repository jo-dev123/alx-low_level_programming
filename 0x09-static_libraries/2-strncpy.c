#include "main.h"

/**
 * _strncpy - copy string
 * @dest: parameter 1
 * @src: parameter 2
 * @n: condition limit for looper
 *
 * Return: dest if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int looper;

	looper = 0;

	while (looper < n && src[looper] != '\0')
	{
		dest[looper] = src[looper];
		looper++;
	}

	while (looper < n)
	{
		dest[looper] = '\0';
		looper++;
	}
	return (dest);
}
