#include "main.h"

/**
 * _strcat - concatenate string
 * @dest: first string
 * @src: second string
 *
 * Description: concatenate two strings
 * Return: pointer to resulting sting dest
 */

char *_strcat(char *dest, char *src)
{
	int looper1;
	int looper2;

	looper1 = 0;
	looper2 = 0;

	while (dest[looper1] != 0)
	{
		looper1++;
	}

	while (src[looper2] != 0)
	{
		dest[looper1] = src[looper2];
		looper1++;
		looper2++;
	}
	return (dest);
}
