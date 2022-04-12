#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: First parameter
 * @s2: Second Parameter
 *
 * Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int looper1 = 0;
	int looper2 = 0;

	while (s1[looper1] != '\0' && looper2 == 0)
	{
		looper2 = s1[looper1] - s2[looper1];
		looper1++;
	}
	return (looper2);
}
