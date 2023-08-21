#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Length of string to be returned.
 * Return: Nothing.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
