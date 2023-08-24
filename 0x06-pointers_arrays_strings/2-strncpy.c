#include "main.h"

/**
 * *_strncpy - Copies a string.
 * @dest: Input value.
 * @src: Input value.
 * @n: Input value.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for (b = b; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
