#include "main.h"

/**
 * _strlen - return length of string
 * @s: stores char
 *
 * Description: Count string
 * Return: Total Number
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
