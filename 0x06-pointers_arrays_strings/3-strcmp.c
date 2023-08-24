#include "main.h"

/**
 * _strcmp - Compares two srings.
 * @s1: String value 1
 * @s2: String value 2
 * Return: (0) when same
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b = 0;

	for (a = 0; s1[a] != '\0' && b == 0; a++)
	{
		b = s1[a] - s2[a];
	}
	return (b);
}
