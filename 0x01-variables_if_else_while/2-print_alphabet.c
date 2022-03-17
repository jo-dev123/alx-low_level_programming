#include <stdio.h>

/**
 * main - Entry Point
 * @void: no parameter
 *
 * Description: Print lower cases
 * Return: 0 if successful
 */

int main()
{
	char current_letter = 'a';
	char end_letter = 'z';

	while(current_letter != end_letter)
	{
		putchar(current_letter);
		current_letter++;
	}

	putchar(\n);
	return (0);

}
