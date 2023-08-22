#include "main.h"

/**
 * print_rev - Prints string in reverse.
 * @s: String to be printed.
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
