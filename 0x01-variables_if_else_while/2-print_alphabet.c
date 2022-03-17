#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Print lower cases
 * Return: 0 if successful
 */

int main(void)
{
	char current_letter = 'a';

	while (current_letter <= 'z')
	{
		putchar(current_letter);
		current_letter++;
	}

	putchar('\n');

	return (0);

}
