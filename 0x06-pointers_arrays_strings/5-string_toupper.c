#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: String to be converted.
 * Return: Modified string.
 */
char *string_toupper(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] = str[b] - 32;
		}
	}
	return (str);
}
