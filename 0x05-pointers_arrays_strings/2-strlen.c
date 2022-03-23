#include "main.h"

/**
 * _strlen - return length of string
 * @*s: stores char
 *
 * Description: Count string
 * Return: Total Number
 */

int _strlen(char *s)
{
	int i;
	int k = &i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		*k = i;
	}

	return (i);
}
