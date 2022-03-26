#include "main.h"

/**
 * leet - string parameter
 * @str: string parameter
 *
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == str[i])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
