#include "main.h"

/**
 * *_strncpy - Copies a string.
 * @dest: String value.
 * @src: String value.
 * @n: Input value.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
