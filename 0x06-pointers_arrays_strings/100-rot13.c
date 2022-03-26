#include "main.h"

/**
 * rot13 - Caesers Ciphering
 * @str: string parameter
 *
 * Return: Weakly encrypted str
 */

char *rot13(char *str)
{
	int i, c;

	char realLet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char cphLet[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (c = 0; realLet[c] != '\0'; c++)
		{
			if (realLet[c] == str[i])
			{
				str[i] = cphLet[c];
				break;
			}
		}
	}
	return (str);
}
