#include "main.h"

/**
 * *_strncat - Concentrates two strings.
 * @dest: String value.
 * @src: String value.
 * @n: value of bytes from src.
 * Return: A pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
