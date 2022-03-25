#include "main.h"

/**
 * cap_string - lower to uppercase
 * @string: string parameter
 *
 * Return: string
 */

char *cap_string(char *string)
{
	int i;
	int j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;

	while (string[i] != '\0')
	{
		if (i == 0 && string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}

		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == string[i] && (string[i + 1] >= 97 && string[i + 1] <= 122))
			{
				string[i + 1] = string[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (string);
}
