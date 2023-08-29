#include "main.h"

/**
 * *_memset - Fills memory with constant byte.
 * @s: Pointed destination.
 * @b: Constant byte.
 * @n: bytes
 * Return: A pointer (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
