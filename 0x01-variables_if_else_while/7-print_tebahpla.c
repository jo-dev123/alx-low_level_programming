#include <stdio.h>

/**
 * main - Entry point
 * @void: no parameter
 *
 * Description: return the alphabet backwards
 * Return:0 if successful
 */

int main(void)
{
	char last_alph;

	for (last_alph = 'z'; last_alph >= 'a'; last_alph--)
	{
		putchar(last_alph);
	}

	putchar('\n');
	
	return (0);
}
