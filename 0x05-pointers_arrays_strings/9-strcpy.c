#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src.
 * @src: Source code.
 * @dest: Destination value.
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
